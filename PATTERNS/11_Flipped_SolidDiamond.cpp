#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row"<<endl; 
    cin>>row;
    // Upper Half
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<row-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower Half

      for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*row-2*i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
};