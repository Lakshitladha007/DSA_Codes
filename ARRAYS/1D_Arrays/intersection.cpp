#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main() {
    vector<int>A{1,2,3,3,4,6,8};
    vector<int>B{3,3,3,4,10};
    vector<int>arr;
    
    //outer loop on A vector
    for(int i=0;i<A.size();i++)
       
    //inner loop to compare each element of A with B    
       for(int j=0;j<B.size();j++)
         if(A[i]==B[j]){
            B[j]=INT_MIN;
             arr.push_back(A[i]);
             A[i]=INT_MAX;  // if both aarays have common elements than inserting in arr vector
         }

    // printing ans array whic has intersecting elements
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
}