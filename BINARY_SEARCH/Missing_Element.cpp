#include<iostream>
using namespace std;
int Missing_Element(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==mid+1){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return arr[mid]+1;
}

int main()
{
    int arr[]={1,2,3,5,6,7,8,9,10};
    int size=9;
    int Missing=Missing_Element(arr, size);
    cout<<"missing element is "<<Missing<<endl; 
}