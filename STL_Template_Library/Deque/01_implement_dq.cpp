#include <iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq={10,50,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto it:dq){
        cout<<it<<" ";
    }
    cout<<dq.front()<<" "<<dq.back();
    return 0;
}
