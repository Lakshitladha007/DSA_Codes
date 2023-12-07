#include<iostream>
using namespace std;
int Pivot_Element(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    //int element=target;
    while(start<=end){
     if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
           return arr[mid];
        else if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else{  
            end=mid-1;
        }
        mid=(start+end)/2;
    }
}
int main()
{
    int arr[]={0,1,5,8,9,11,15,18,22,2,4,8,10,20};
    int size=14;
    int index=Pivot_Element(arr, size);
    cout<<"peak element is: "<<index<<endl; 
}