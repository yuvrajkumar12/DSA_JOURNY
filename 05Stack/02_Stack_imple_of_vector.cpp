#include<iostream>
#include<vector>
using namespace std;
struct  Mystack{
    vector<int>v1;
    void push(int v)
    {
        v1.push_back(v);
    }
    int pop()
    {
        int res=v1.back();
        v1.pop_back();
        return res;
    }
    int size()
    {
        return v1.size();
    }
    bool isEmpty()
    {
        return v1.empty();
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
