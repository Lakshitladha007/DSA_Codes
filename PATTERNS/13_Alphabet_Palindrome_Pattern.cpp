#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {    
        int j=0;
        char ch='A';
        for(;j<i+1;j++){
            ch=char('A'+j);
             cout<<ch;
        }
        
        ch=char(ch-1);
        for(int k=0;k<i;k++){
            cout<<char(ch-k);
        }
        cout<<endl;
    }

}