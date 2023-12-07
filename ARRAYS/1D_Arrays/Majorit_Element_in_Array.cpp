#include<iostream>
using namespace std;
int main(){
    int arr[]={3,3,4,2,4,4,2,4,4};
    int size=9;
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>(size/2)){
            cout<<"Majority Element in Array is:"<<arr[i]<<endl;
            break;
        }
    }
}