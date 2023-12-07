#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={2,5,8,1,3,6,10,9,11,15,12};
    int size=11;
    int index;
    
    for(int i=0;i<size;i++){
      int MinIndex=i;
      for(int j=i+1;j<size;j++){
               if(arr[j]<arr[MinIndex]){
                  MinIndex=j;
               }
      }
      swap(arr[i],arr[MinIndex]);
    }
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
}