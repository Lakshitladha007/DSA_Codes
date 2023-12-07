#include<iostream>
using namespace std;
int Peak_Element(int arr[],int size)
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
        else{  //if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
            end=mid-1;
        }
        mid=(start+end)/2;
        

    }
}
int main()
{
    int arr[]={0,1,5,8,9,11,15,18,22,17,10,6,2,0};
    int size=14;
    int index=Peak_Element(arr, size);
    cout<<"peak element is: "<<index<<endl; 
}
