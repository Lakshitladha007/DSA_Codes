#include <iostream>
#include<vector> 
#include<limits.h>
using namespace std;



int main() {
    int sizeA,sizeB;
    //creating array 1
    cout<<"enter size of vector A:"<<endl;
    cin>>sizeA;
     vector<int> Arr(sizeA);
    cout<<"Enter "<<sizeA<<" elements of array"<<endl;
    //inserting elements in Array 1
    for(int i=0;i<sizeA;i++){
      cin>>Arr[i];
    }

    //creating array 2
    cout<<"enter size of vector B:"<<endl;
    cin>>sizeB;
     vector<int> Brr(sizeB);
    cout<<"Enter "<<sizeB<<" elements of array"<<endl;
    //inserting elements in Array 2
    for(int i=0;i<sizeB;i++){
      cin>>Brr[i];
    }

    //creating array ans which will contain union of both arrays 
    vector<int>ans;
    for(int i=0;i<Arr.size();i++)
    for(int j=0;j<Brr.size();j++)
         if(Arr[i]==Brr[j]){
            Brr[j]=INT_MIN;
        }


    
    //inserting elements of Array 1 in ans array
    for(int i=0;i<sizeA;i++)
      ans.push_back(Arr[i]);

     //inserting elements of Array 2 in ans array
    for(int i=0;i<sizeB;i++)
      if(Brr[i]!=INT_MIN)
         ans.push_back(Brr[i]);

    //printting elements of  ans array
    for(int i=0;i<ans.size();i++)
      cout<<ans[i]<<" ";
   
    return 0;
}
