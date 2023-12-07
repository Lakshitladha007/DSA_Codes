#include <iostream>
#include<algorithm>
 
using namespace std;
int main() {
    int arr[50];
    int size;
    cout<<"enter size of array:"<<endl;
    cin>>size;
    int b=0;
    cout<<"Enter elemnets of array"<<endl;
    for(int i=0;i<size;i++){
      cin>>arr[i];
      
    }
     sort(arr,arr+size);
    for(int i=0;i<size;i=i+2){
        if(arr[i]!=arr[i+1]){
          b=arr[i];
          break;
        }
    }
    cout<<"distinct element is:"<<b<<endl;
    return 0;
}