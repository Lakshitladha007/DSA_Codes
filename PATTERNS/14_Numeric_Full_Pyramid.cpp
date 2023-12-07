#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int j=i+1;
        for(int k=0;k<i+1;k++){
            cout<<j;
            j++;
        }
        int t=j-2;
        for(int k=t;k>i;k--){
            cout<<k;
        }
        cout<<endl;
    }
}