#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<vector<int>>arr(5,vector<int>(5,-8));
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
          cout<<arr[i][j]<<" ";
    
    cout<<endl;
    }
      cout<<arr[5][5];
  
    
}