#include<iostream>
#include<vector>
using namespace std;
int Peak_Element(vector<int>arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        if(arr[mid]<arr[mid-1]){
           if(arr[mid]==target){
           return mid;
           }
           end=mid-1;
           break;
        }
        if (arr[mid]>arr[mid+1]){
           if(arr[mid]==target){
           return mid;
           }
           start=mid+1;
           break;
        }
        if(arr[mid]==target)
           return mid;
        else if (arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return 0;
        

}

int main()
{
    vector <int> arr{4,5,6,7,0,1,2};
    int n=arr.size()-1;
    int target=0;
    int index=Peak_Element(arr,target);
    cout<<"peak element is: "<<index<<endl; 
}
