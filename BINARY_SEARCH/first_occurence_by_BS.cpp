#include<iostream>
using namespace std;
int first_Occ(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start+end)/2;
    int element=target;
    while(start<=end){
        if(arr[mid]==element){
           ans=mid;
           end=mid-1;
        }
        else if (arr[mid]>element)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
        

    }
}
int main()
{
    int arr[]={2,4,4,9,9,9,15};
    int size=7;
    int target=4;
    int answer=first_Occ(arr, size, target);
  
    if(answer)
      cout<<"first occurence of element found at "<<answer<<" index"<<endl;
    else
      cout<<"element not found"<<endl;  
}
