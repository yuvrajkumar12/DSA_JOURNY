#include <iostream>
#include <vector>
#include<sstream>
using namespace std;
int Binarysearch(vector<int>& arr,int n,int target){
    int low=0;
    int high=n-1;
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
int main(){
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int>arr;
    int s1;
    while (iss >> s1) {
        arr.push_back(s1);
    }
    int n=arr.size();
    cout<<"Enter your Target: ";
    int target;
    cin>>target;
    int res=Binarysearch(arr,n,target);
    if(res!=-1){
        cout<<"Target is fount at index of: "<<res;
    }
    else{
        cout<<"Target is Not found: "<<res;
    }
   
    return 0;
}