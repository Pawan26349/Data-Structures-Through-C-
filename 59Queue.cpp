#include<iostream>
using namespace std;

#define n 20

class Queue{
    int* arr;
    int back;
    int front;

    public:
    Queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int ele){
        if(back==n-1){
            cout<<"There is overflow.\n";
            return ;
        }
        back++;
        arr[back]=ele;
        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front>back || (front==-1 && back==-1)){
            cout<<"There is no element to delete .\n";
            return;
        }
        front++;
    }

    int peek(){
        if(front>back || (front==-1 && back==-1)){
            cout<<"There is no element in the queue.\n";
            return -1;
        }
        else{
            return arr[front];
        }
    }

    bool empty(){
        return (front>back || (front==-1 && back==-1));
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    return 0;
}