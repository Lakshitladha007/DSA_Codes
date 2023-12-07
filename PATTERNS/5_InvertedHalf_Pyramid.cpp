#include<iostream>
using namespace std;

int main(){


    int row,col;
    cout<<"enter rows:"<<endl;
    cin>>row;
    for(int i=0;i<row;i++){
       for(int j=row;j>i;j--){
       cout<<'*';
       }
    cout<<endl;
    }

}  