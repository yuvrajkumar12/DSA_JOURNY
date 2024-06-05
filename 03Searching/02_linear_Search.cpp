#include <iostream>
#include <vector>
#include<sstream>
using namespace std;
int Linearsearch(vector<int>& arr,int n,int target,int i){
    if(i==n)
        return i;
    if(arr[i]==target)
        return i;
    return Linearsearch(arr,n,target,i+1);

};
int main(){
    cout<<"Enetr your arr: ";
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int num;
    while(iss>>num){
        arr.push_back(num);
    }
    int target;
    cout<<"Enter your Target: ";
    cin>>target;
    int n=arr.size();
    int res=Linearsearch(arr,n,target,0);
    if(res!=-1){
        cout<<"Target is fount at index of: "<<res;
    }
    else{
        cout<<"Target is Not found: "<<res;
    }
    return 0;
}