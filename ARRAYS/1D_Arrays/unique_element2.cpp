#include <iostream>
#include<vector> 
using namespace std;
int unique(vector<int> V){
    int ans=0;
    for(int i=0;i< V.size();i++)
    {
        ans=ans^V[i];
    }
    return ans;
}


int main() {
    int size,uniqueElement;
    cout<<"enter size of vector:"<<endl;
    cin>>size;
     vector<int> V(size);
    cout<<"Enter "<<size<<" elements of array"<<endl;
    for(int i=0;i<size;i++){
      cin>>V[i];
    }
    uniqueElement=unique(V);
   
    cout<<"distinct element is:"<<uniqueElement<<endl;
    return 0;
}
