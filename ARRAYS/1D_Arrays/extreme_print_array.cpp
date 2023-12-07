#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    int A[10]={2,4,8,10,11,13,45,1,3};
    int size=10;
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        if(start==end)
          cout<<A[start]<<" ";
        else{
          cout<<A[start]<<" ";
          cout<<A[end]<<" ";
        }
        start++;
        end--;
    }


    /*
    for(int k=0;k<10;k++)
    {
        while(start>=0 && start<size/2)
         {
             cout<<A[start]<<endl;
             start++;
             break;
         } 
         while(end>size/2 && end<=size-1)
         {
             cout<<A[end]<<endl;
             end--;
             break;
         }
    }
    */
}
    
