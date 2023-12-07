#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void BuyAndSell(vector<int>& arr,int i,int j, int& maxi){
   if(i==arr.size()-1 && j==arr.size())
        return;
  
    if((arr[j]-arr[i])>maxi)
    maxi=arr[j]-arr[i];
  
  while(i<=arr.size()-2){
    if(j==arr.size()){
        return;
    }
  BuyAndSell(arr,i,j+1,maxi);
  i=i+1;
  }
}
int main(){


    vector<int>arr={2,4,7,9,1,3,5};
    int i=0,j=1;
    int maxi=INT_MIN;
    BuyAndSell(arr,i,j,maxi);
cout<<"maximum profit is:"<<maxi<<endl;
    return 0;

}