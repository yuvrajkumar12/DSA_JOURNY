#include<iostream>
using namespace std;
struct queue{
    int font,rear,cap;
    int *arr;
    queue(int c)
    {
        font=rear=0;
        cap=c;
        arr=new int[cap];
    }
    void enqueue1(int data)//insert the element in the first;
    {
       if(font==cap){
        printf("\n Queue is Empty");
        return;
       }
       else{
        arr[rear]=data;
        rear++;
       }
       return;
    }
    void dequeue1()//Insert the element of the end;
    {
        if(font==rear)//check queue is empty or not;
        {
            cout << "\n Queue is Full";
            return;
        }
        else{
            for(int i=0;i<rear-1;i++)
            {
                arr[i]=arr[i+1];
            }
            rear--;
        }
        cout<<endl;
       
    }
    void  display()//print queue element;
    {
        if(font==rear)
        {
            cout << "\n Queue is Full";
            return;
        }
        //travers for the rear and print element;
        for(int i=0;i<rear;i++)
        {
            cout << arr[i] << " <-- ";
        }
        cout << endl;
    }
};
int main()
{
    queue a(5);
    a.display();
    a.enqueue1(10);
    a.enqueue1(20);
    cout<<"Display the queue=> ";
    a.display();
    a.dequeue1();
    cout<<"Display  after using deque remove first element=> ";
    a.display();
    a.enqueue1(30);
    cout<<"Display after add new Element=> ";
    a.display();
    a.enqueue1(35);
    a.display();
    a.enqueue1(69);
    cout<<"print all the operaton peform=> ";
    a.display();

}
