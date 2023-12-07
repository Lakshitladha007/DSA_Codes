#include<iostream>
using namespace std;
int main(){
    int A[4][3]={{3,3,4},{1,2,3},{6,7,8},{10,11,12}};
    int row=4,cols=3;
    for(int j=0;j<row;j++){
    for(int i=0;i<cols;i++){
      cout<<A[j][i]<<" ";
    }
    cout<<endl;
    }
    int B[3][4];
    for(int i=0;i<4;i++)
    for(int j=0;j<cols;j++)
       B[j][i]=A[i][j];

    
    for(int j=0;j<cols;j++){
    for(int i=0;i<row;i++){
      cout<<B[i][j]<<" ";
    }
    cout<<endl;
    }
}