#include<bits/stdc++.h>
using namespace std;
int myPartition(vector<int>&arr, int low, int high){
    int povet=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<povet){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort1(vector<int>&arr,int low, int high){
    if(low < high){
        int p=myPartition(arr,low, high);
        quickSort1(arr, low, p-1);
        quickSort1(arr,p+1,high);
    }
}

int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int num;
    while(iss>>num){
        arr.push_back(num);
    }
    int low=0;
    int high=arr.size()-1;
   quickSort1(arr,low,high);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}