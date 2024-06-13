#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int> create_forward_list(int arr[],int n){
    forward_list<int>l;
    for(int i=0;i<n;i++){
        l.push_front(arr[i]);
    }
    l.reverse();
    l.push_front(15);
    l.remove(45);
    return l;

}
int main(){
    int arr[]={12,3,45,6,33,42};
    int n=sizeof(arr)/sizeof(arr[0]);
    forward_list<int> x = create_forward_list(arr, n);
    for(int it:x){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
// #include <iostream>
// #include <forward_list>
// using namespace std;

// forward_list<int> create_forward_list(int arr[], int n) {
//     forward_list<int> l;
//     for (int i = 0; i < n; i++) {
//         l.push_front(arr[i]);
//     }
//     l.reverse(); // To maintain the original order of elements
//     return l;
// }

// int main() {
//     int arr[] = {12, 3, 45, 6, 33, 42};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     forward_list<int> x = create_forward_list(arr, n);
    
//     for (int it : x) {
//         cout << it << " ";
//     }
//     cout << endl;
    
//     return 0;
// }