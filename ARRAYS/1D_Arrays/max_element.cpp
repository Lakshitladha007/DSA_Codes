#include<iostream>
using namespace std;
#include<limits.h>
int main(){
    int max=INT_MIN;
    int Arr[]={2,3,6,19,79,80,100,12,67,45};
    int size=10;
    for(int i=0;i<size-1;i++)
        if(Arr[i]>max) 
          max=Arr[i];  //found greater number than max,so update max

    cout<<"Maximum element in array is:"<<max<<endl;
    
    
    // ANOTHER APPROACH TO FIND MAXIMUM ELEMENT WITHOUT LIMITS.H FILE
    /*
    int max=Arr[0];
     for(int i=1;i<size-1;i++)
        if(Arr[i]>max)
          max=Arr[i];
    cout<<"Maximum element in array is:"<<max<<endl;
    */

      
}