#include<iostream>
using namespace std;

struct queue{
    int *arr;
    int front, cap, size;

    queue(int c)
    {
        arr = new int[c];
        cap = c;
        size = 0;
        front = 0;
    }

    int getfront()
    {
        if(isEmpty()) return -1;
        else{
            return arr[front];
        }
    }

    int rear(){
        if(isEmpty()) return -1;
        else{
            return (front + size - 1) % cap;
        }
    }

    void enqueue1(int data)
    {
        if(isfull()) return;
        int rear_index = rear();
        rear_index = (rear_index + 1) % cap;
        arr[rear_index] = data;
        size++;
    }

    void dequeue1()
    {
        if(isEmpty()) return;
        front = (front + 1) % cap;
        size--;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isfull() {
        return size == cap;
    }

    void display() {
        int i = front;
        int count = 0;
        while (count < size) {
            cout << arr[i] << " ";
            i = (i + 1) % cap;
            count++;
        }
        cout << endl;
    }
};

int main()
{
    queue a(5);
    a.enqueue1(10);
    a.enqueue1(11);
    a.enqueue1(12);
    cout << "Display queue element=> ";
    a.display();
    a.enqueue1(13);
    a.dequeue1();
    a.display();
    cout << "Display elememt after dequeue=> ";
    a.enqueue1(14);
    a.enqueue1(15);
    a.dequeue1();
    a.enqueue1(16);
    cout << "Print All the Element=> ";
    a.display();
    cout << a.getfront() << endl;
    cout << a.rear() << endl;
}
