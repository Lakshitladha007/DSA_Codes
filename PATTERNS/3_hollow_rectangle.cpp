#include<iostream>
using namespace std;

int main(){


    int row,col;
    cout<<"enter row and column"<<endl;
    cin>>row>>col;
    for(int i=0;i<row;i++){
    if(i==0  || i==row-1)
        {
            for(int j=0;j<col;j++)
             cout<<"*";
            cout<<endl;
        }
        else
        {
            cout<<'*';
            for(int j=0;j<col-2;j++)
              cout<<" ";
            cout<<'*'<<endl;
        }
    }
}   

    // for(int i=0;i<row;i++)
    // {
    //     for(int j=0;j<col;j++){
    //         if(i==0 || i==row-1){
    //             cout<<"*";
    //         }
    //         else{
    //             if(j==0 || j==col-1){
    //                 cout<<"*";
    //             }
    //             else
    //             cout<<" ";
                
    //             }
    //         }
    //          cout<<endl;
    //     }
     
    
    
   

