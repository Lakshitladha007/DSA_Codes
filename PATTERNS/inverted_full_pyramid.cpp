#include<iostream>
using namespace std;

int main(){


    int row;
    int i,j;
    cout<<"enter row"<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=2*row-2;j++)
        {
             if(j>=0+i && j<=(2*row-2)-i)
             { 
              if(i%2==0)
              {
                if(j%2==0)
                   cout<<"*";
                else 
                  cout<<" ";
              }
               else
              {
                 if(j%2==0)
                 cout<<" ";
                else
                  cout<<"*";
              }
             }
            else
               cout<<" ";
        }
        cout<<endl;
    }
  }