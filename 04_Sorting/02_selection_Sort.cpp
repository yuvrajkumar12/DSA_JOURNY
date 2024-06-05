#include<iostream>
#include<vector>
using namespace std;
void  selection_sort(vector<int>&arr){
    int s=arr.size();
    for(int i=0;i<s-1;i++){
        int mid_ind=i;
        for(int j=i+1;j<=s-1;j++){
            if(arr[j]<arr[mid_ind]){
                mid_ind=j;
            }
        }
        swap(arr[mid_ind],arr[i]);
    }
}
int main(){
    int t;
    cin>>t;
    vector<int>arr;
    while(t--){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    selection_sort(arr);
    for(int it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
