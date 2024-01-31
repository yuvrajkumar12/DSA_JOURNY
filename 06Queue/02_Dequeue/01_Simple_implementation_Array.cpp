#include<iostream>
using namespace std;
struct Deque{
    int size,cap;
    int *arr;
    Deque(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
    void insertRear(int x)
    {
        if(isfull()) return;
        arr[size]=x;
        size++;
    }
    void deletrear()
    {
        if(is_empty()) return;
        size--;
    }
}
int main()
{
    retun 0;
}