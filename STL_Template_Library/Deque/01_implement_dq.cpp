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
// #include <sstream>
// #include <vector>
// using namespace std;
// int main(){
//     string line;
//     getline(cin, line);
//     istringstream iss(line);
//     vector<int> arr;
//     int num;
//     while (iss >> num) {
//         arr.push_back(num);
//     }
//     int s=arr.size();
    

//     return 0;
// }