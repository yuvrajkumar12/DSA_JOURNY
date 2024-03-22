#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>> getarray1(int roll[],int marks[],int n){
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
       arr.push_back({marks[i],roll[i]});
    }
    sort(arr.rbegin(), arr.rend());
    return arr;
}
int main(){
    int roll[]={101, 108, 103, 105};
    int marks[]={70, 80, 40, 90};
    vector<pair<int,int>>arr = getarray1(roll,marks,4);

    for(auto it:arr){
        cout<<it.second<<" "<<it.first<<endl;
    }
    return 0;
}