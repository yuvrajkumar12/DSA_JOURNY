#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
void Previous_Greater_Element(vector<int>&arr){//time complicity O(n);
    int n=arr.size();
    stack<int>s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        int pq=s.empty()?-1:s.top();
        cout<<pq<<" ";
        s.push(arr[i]);
    }
    cout<<endl;
}

vector<int>next_greater_element(vector<int>&arr){
    int n = arr.size();
    vector<int> v(n);
    stack<int> s;
    s.push(arr[n - 1]);
    v[n - 1] = -1;
    for (int i = n - 2; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        int dq = s.empty() ? -1 : s.top();
        v[i] = dq;
        s.push(arr[i]);
    }
    return v;
}
//using for loop
void previougreater(vector<int>&arr){ //time complicity o(n^2)
    for(int i=0;i<arr.size();i++){
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==-1){
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}
//next_Greater_Number
void nextgreater(vector<int>&arr){ //time complicity o(n^2)
    for(int i=0;i<arr.size();i++){
        int j;
        for(j=i+1;j<arr.size();j++){
            if(arr[j]>arr[i]){
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==arr.size()){
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int a;
    while(iss>>a){
        arr.push_back(a);
    }
    Previous_Greater_Element(arr);//O(n)
    previougreater(arr);//O(n^2)
    cout<<"next_greater_element"<<endl;
    vector<int> nextGreater = next_greater_element(arr); // O(n)
    for (int val : nextGreater) {
        cout << val << " ";
    }
    cout << endl;
    cout<<"o^2"<<endl;
    nextgreater(arr);
    return 0;
}