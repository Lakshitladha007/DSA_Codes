#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5,6,7,8};
    int sum;
    cout<<"Enter value of Sum"<<endl;
    cin>>sum;
    int sizeA=8;
    int sizeB=5;
    for(int i=0;i<sizeA;i++)
       for(int j=i+1;j<sizeA;j++)
         if(A[i]+A[j]==sum)
           cout<<"Pair is:"<<" ("<<A[i]<<","<<A[j]<<")"<<endl;

}