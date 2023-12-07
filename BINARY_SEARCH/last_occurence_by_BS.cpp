#include<iostream>
using namespace std;
int last_Occ(int arr[],int size,int target)
{                                                       //RECHECK THIS CODE,ANSWER KI VALUE EK JYAADA AARI H
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start)+(end-start)/2;
    int element=target;
    while(start<=end){
        if(arr[mid]==element){
            //store answer
           ans=mid;
           //search in right
           start=mid+1;
        }
        else if (arr[mid]>element)
        {
           //element less than element at mid
            end=mid-1;
        }
        else{
            //element greater than element at mid
            start=mid+1;
        }
        mid=(start+end)/2;
        

    }
}
int main()
{
    int arr[]={2,4,4,9,9,9,15};
    int size=7;
    int target=15;
    int answer=last_Occ(arr, size, target);
  
    if(answer)
      cout<<"last occurence of element found at "<<answer<<" index"<<endl;
    else
      cout<<"element not found"<<endl;  
}