#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4,5,6,7,8};
    int sum;
    cout<<"Enter value of Sum"<<endl;
    cin>>sum;
    int sizeA=8;
    for(int i=0;i<sizeA;i++)
       for(int j=i+1;j<sizeA;j++)
           for(int k=j+1;k<sizeA;k++)
              if(A[i]+A[j]+A[k]==sum)
                 cout<<"Pair is:"<<" ("<<A[i]<<","<<A[j]<<","<<A[k]<<")"<<endl;

}