#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int A[3][3]={{1,3,4},{5,10,11},{6,8,9}};
    int row=3,col=3;
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            if(A[i][j]>max){
                max=A[i][j];
            }
            if(A[i][j]<min)
            {
                min=A[i][j];
            }

        }
    }
    cout<<"Maximum value in array is:"<<max<<endl;
    cout<<"Minimum value in array is:"<<min<<endl;
}
