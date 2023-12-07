#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=6;
   for(int round=1;round<size;round++)
   {  
     // Step A: VALUE KO FETCH KAROO
     int value=arr[round];
     int j=round-1;
     for( ;j>=0;j--){
        // Step B: COMPARE KAROOOO
        if(arr[j]>value){
            // Step C- SHIFT KARNA HAI
           arr[j+1]=arr[j];
          
        }
        else{
        //RUKNA HAII!!!!
        break;
        }
    }
    // Step D: VALUE KO COPY KAROO
    arr[j+1]=value;
   }
    for(int i=0;i<size;i++)
      cout<<arr[i]<<" ";
}