#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter row\n";
    cin>>row;
    for(int i=0;i<row;i++)
    {
       if(i==0)
       {
        for(int j=0;j<row-1;j++)
        {
          cout<<" ";
        }
          cout<<"*"<<endl;
       }
       else
       {
        for(int j=0;j<row-i-1;j++){
          cout<<" ";
         }
          cout<<"*";
        for(int k=0;k<2*i-1;k++){
           cout<<" ";
        }
           cout<<"*"<<endl;  
       }
    }
    for(int i=0;i<row;i++)
    {
        if(i==row-1)
        {
            for(int j;j<row-3;j++)
        {
          cout<<" ";
        }
          cout<<"*"<<endl;
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                 cout<<" ";
            }
             cout<<"*";
            for(int j=0;j<2*row-2*i-3;j++)
            {
                cout<<" ";
            }
            cout<<"*"<<endl;
            
        }
    }
}