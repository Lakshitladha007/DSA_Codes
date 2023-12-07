#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=6;
    int temp=arr[0];
    for(int i=0;i<size;i++)
    {
        if(i==size-1)
        {
            arr[i]=temp;
        }
        else{
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}