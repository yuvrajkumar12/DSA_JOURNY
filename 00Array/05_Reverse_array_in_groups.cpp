#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void reverseInGroups(vector<int>&arr, int k){
        int s=arr.size();
        for(int i=0;i<s;i+=k){
            int left=i;
            int right=(i+k-1<s)?(i+k-1):(s-1);
            while(left<right){
                int temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
                right--;
            }
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>arr;
        string input;
        cin.ignore();
        getline(cin,input);
        stringstream ss(input);
        int num;
        while(ss>>num){
            arr.push_back(num);
        }
        Solution ob;
        ob.reverseInGroups(arr,k);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Input: arr[] = [1, 2, 3, 4, 5], k = 3
//Output: [3, 2, 1, 5, 4]