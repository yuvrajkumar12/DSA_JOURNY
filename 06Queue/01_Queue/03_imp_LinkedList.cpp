#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Queue{
    Node *front,*rear;
    Queue()
    {
        front=rear=NULL;
    }
    void enqueue(int x)
    {
        Node *temp=new Node(x);
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next=temp;//added the new node at the end of the queue change  the rear
        rear=temp;
    }
    void dequeue() // Function to remove a key from given queue q
    {
        if(front==NULL) return;
        Node *temp=front;//Store previous front and move front one node ahead
        front=front->next;
        if(front==NULL)
        {
            rear=NULL;
            delete temp;//
        }
    }
    void printQueue() {
        Node *temp = front;
        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
     Queue a;
    a.enqueue(10);
    a.enqueue(20);
    a.dequeue();
    a.dequeue();
    a.enqueue(30);
    a.enqueue(40);
    a.enqueue(50);
    a.enqueue(90);
    a.dequeue();
    cout << "Queue Front : " << (a.front)->data << endl;
    cout << "Queue Rear : " << (a.rear)->data<<endl;
    a.printQueue();
    return 0;

}