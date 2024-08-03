#include<bits/stdc++.h>
using namespace std;
void klargest(int arr[],int n,int k){
    priority_queue<int>pq(arr,arr+n);
    stack<int>s;
    for(int i=0;i<k;i++){
        s.push(pq.top());
        pq.pop();
    }
    for(int i=0;i<k;i++){
        cout<<s.top()<<" ";
        s.pop();
   }
   cout<<endl;
}
//implement the minheap
void klargest1(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> p(arr,arr+k);
    for(int i=k;i<n;i++)
    {
        if(arr[i]>p.top())
        {
            p.pop();
            p.push(arr[i]);
           
        }
       
    }
    while(p.empty()==false){
        cout<<p.top()<<" ";
        p.pop();
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    klargest(arr,n,k);
    klargest1(arr,n,k);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}