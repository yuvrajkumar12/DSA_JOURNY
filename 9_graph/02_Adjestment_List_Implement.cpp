#include<iostream>
#include<vector>
using namespace std;
void adjacencyList(int v, int e){
    vector<vector<int>> adjlist(v);
    cout<<"Enter your vertex edges"<<endl;
    for(int i=0;i<e;i++){
        int v1,e1;
        cin>>v1>>e1;
        adjlist[v1].push_back(e1);
        adjlist[e1].push_back(v1);
    }
    cout<<"Adjescement List: "<<endl;
    for(int i=0;i<v;i++){
        cout<<i<<":";
        for(int j:adjlist[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int v,e;
    cin>>v>>e;
    adjacencyList(v,e);
    return 0;
}