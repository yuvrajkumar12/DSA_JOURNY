#include<iostream>
using namespace std;
struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c)
    {
        cap=c;
        arr=new int(cap);
        top=-1;
    }
    void push(int x)
    {
        top++;
       arr[top]=x;
    }
    int pop(){
        int res=arr[top];
        top--;
        return res;

    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return (top+1);
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};
int main(){
    MyStack s(5);
    s.push(2);
    s.push(3);
    cout<<"pop of the item "<<s.pop()<<endl;
    s.push(27);
    cout<<"Peek of the value "<<s.peek()<<endl;
    s.push(10);
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}