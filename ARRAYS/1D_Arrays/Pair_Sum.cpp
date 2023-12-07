#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5,6,7,8};
    int B[]={1,2,3,4,5};
    int sum;
    cout<<"Enter value of Sum"<<endl;
    cin>>sum;
    int sizeA=8;
    int sizeB=5;
    for(int i=0;i<sizeA;i++)
       for(int j=0;j<sizeB;j++)
         if(A[i]+B[j]==sum)
           cout<<"Pair is:"<<" ("<<A[i]<<","<<B[j]<<")"<<endl;

}