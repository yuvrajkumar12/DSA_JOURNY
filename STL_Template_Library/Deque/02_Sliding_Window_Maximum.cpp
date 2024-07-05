// Problem: Given an array and an integer K, find the maximum for each and every contiguous subarray of size k.

// Examples :
// Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 
// Output: 3 3 4 5 5 5 6

// Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4 
// Output: 10 10 10 15 15 90 90
#include<iostream>
#include<deque>
#include<vector>
#include <sstream>
using namespace std;
void sliding_window(vector<int>&arr,int n,int k)//Time Complicity O(n)
{
    deque<int>dq(k);
    for(int i=0;i<n-k+1;i++){
        while(!dq.empty()&&arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty()&&dq.front()<=i-k){
            dq.pop_front();
        }
         while(!dq.empty()&&arr[i]>=arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" "<<endl;
};
void printmax(vector<int>&arr,int n,int k){//time Complicity O(n^2)
    for(int i=0;i<n-k+1;i++){
        int mx=arr[i];
        for(int j=i+1;j<i+k;j++){
            mx=max(arr[j],mx);
           
        }
        cout<<mx<<" ";
    }
};
int main(){
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> arr;
    int num;
    while (iss >> num) {
        arr.push_back(num);
    }
    int n=arr.size();
    int k;
    cin>>k;
    sliding_window(arr,n,k);
    printmax(arr,n,k);
    return 0;
}