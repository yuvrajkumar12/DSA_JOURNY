#include<bits/stdc++.h>
using namespace std;
vector<int>maxandsecondmax(vector<int>arr){
    int s=arr.size();
    int max=INT_MIN,max2=INT_MIN;
    for(int i=0;i<s;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }else if((arr[i]>max2) && (arr[i]!=max)){
            max2=arr[i];
        }
    }
    if(max2==INT_MIN){
        max2=-1;
    }
    return {max,max2};
}
int main(){
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> arr;
    int num;
    while (iss >> num) {
        arr.push_back(num);
    }
    vector<int>ans=maxandsecondmax(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}