#include<iostream>
#include<map>
using namespace std;
#include<vector>
int main(){
   map<int,int>mmap;
   mmap[1]=10;
   mmap[2]=20;
   mmap[3]=30;
   cout<<mmap.lower_bound(2)->second<<" ";
    cout<<mmap.upper_bound(2)->second<<" ";
    return 0;
}