#include <iostream>
#include <vector>
#include<sstream>
using namespace std;
int Rbinarysearch(vector<int>& arr,int low,int high,int target)
{
    if(low>high) 
        return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==target)
        return mid; 
    else if(arr[mid]>target)
        return Rbinarysearch(arr,low,mid-1,target);
    else
        return Rbinarysearch(arr,mid+1,high,target);

};
int binaryse(vector<int>&arr,int low,int high,int target){{
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
};

}
int main(){
    cout<<"Enter your array: ";
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int num;
    while(iss>>num){
        arr.push_back(num);
    }
    int n=arr.size();
    cout<<"Enter your Target: ";
    int target;
    cin>>target;
    //using recursion
    int res=Rbinarysearch(arr,0,n-1,target);
    if(res!=-1){
        cout<<"Target is found at index of: "<<res<<endl;
    }
    else{
        cout<<"Target is Not found: "<<res<<endl;
    }
    //using simple method
    int res1=binaryse(arr,0,n-1,target);
    if(res1!=-1){
        cout<<"Target is found at index of: "<<res1;
    }
    else{
        cout<<"Target is Not found: "<<res1;
    }
    return 0;
}