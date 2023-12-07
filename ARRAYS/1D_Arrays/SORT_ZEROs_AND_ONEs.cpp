#include<iostream>
using namespace std;
int main()
{
    int A[]={0,1,1,0,1,0,1,0,1,0,1,1,0,1};
    int size=14;
    int start=0;
    int i=0;
    int end=size-1;
    while(start<=end)
    {
        if(A[start]==0)
         {
            start++;
         }
         else{
            swap(A[start],A[end]);
            end--;
         }

    }
    for(int i=0;i<size;i++)
      cout<<A[i]<<" ";
} 