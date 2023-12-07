#include<iostream>
using namespace std;
#include<limits.h>
int main(){
    int min=INT_MAX;
    int Arr[]={8,3,6,19,79,80,2,12,67,45};
    int size=10;
    for(int i=0;i<size-1;i++)
        if(Arr[i]<min) 
          min=Arr[i];  //found greater number than max,so update max

    cout<<"Minimum element in array is:"<<min<<endl;
     
    
    // ANOTHER APPROACH TO FIND MINIMUM ELEMENT WITHOUT LIMITS.H FILE
    /*
    int min=Arr[0];
     for(int i=1;i<size-1;i++)
        if(Arr[i]<min)
          min=Arr[i];
    cout<<"Minimum element in array is:"<<min<<endl;
    */

      
}