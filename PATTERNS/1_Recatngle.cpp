#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter number of rows nd columns:"<<endl;
    cin>>row;
    cin>>col;
    for(int i=0;i<row;i++){
        for(int i=0;i<col;i++){
            cout<<"*";
        }
        cout<<endl;

    }
}