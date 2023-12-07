#include<iostream>
using namespace std;

int main(){


    int row,col;
    cout<<"enter rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<row-i;j++){
           cout<<"* ";
        }
        
        cout<<endl;
    }

} 