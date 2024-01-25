#include<iostream>
#include<vector>
using namespace std;
struct  Mystack{
    vector<int>v1;
    void push(int v)
    {
        v1.push_back(v);//Add the item of Stack
    }
    int pop()
    {
        int res=v1.back();//print the first item of the stack
        v1.pop_back();
        return res;
    }
    int size()
    {
        return v1.size();// print size of the array
    }
    bool isEmpty()
    {
        return v1.empty();// check the condition of true or false return 0 or 1
    }
    int peek()
    {
        return v1.back();
    }
};// End this Structur
int main()
{
    Mystack s;
    s.push(35);
    s.push(6);
    s.push(27);
    s.push(10);
    cout<<s.pop()<<endl;
    cout<<"Size of the Stack "<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
