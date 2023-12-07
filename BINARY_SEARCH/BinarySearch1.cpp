#include<iostream>
using namespace std;
int Binary_search(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int element=target;
    while(start<=end){
        if(arr[mid]==element)
           return mid;
        else if (arr[mid]>element)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[]={2,4,4,9,9,9,15};
    int size=7;
    int target=9;
    int index=Binary_search(arr, size, target);
  
    if(index)
      cout<<"element found at "<<index<<" index"<<endl;
    else
      cout<<"element not found"<<endl;  
}
