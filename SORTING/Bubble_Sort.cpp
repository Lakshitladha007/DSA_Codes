#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=6;
   for(int round=1;round<size;round++)
   { 
    bool swapcount=0;
     for(int j=0;j<size-round;j++){
        if(arr[j]>arr[j+1]){
            swapcount=true;
           swap(arr[j],arr[j+1]);
          
        }
        
     }
     if(swapcount==false)
       break;
   }
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
}