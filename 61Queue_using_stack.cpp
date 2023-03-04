#include<iostream>
#include<stack>
using namespace std;

// This is non recursive method with two stack.
// class queue{
//     stack<int> s1;
//     stack<int> s2;
// public:    
//     void enqueue(int ele){
//         s1.push(ele);
//     }

//     int dequeue()
//     {
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval=s2.top();
//         s2.pop();
//         return topval;
//     }

//     bool empty(){
//         if(s1.empty() and s2.empty()){
//             return true;
//         }
//         return false;
//     }
// };


// This is recursive method with a single stack.
class queue{
    stack<int> s1;
public:    
    void enqueue(int ele){
        s1.push(ele);
    }

    int dequeue()
    {
        if(s1.empty()){
            cout<<"Queue is empty.\n";
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }

        int item = dequeue();
        s1.push(x);
        return item;
    }

    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(5);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    return 0;
}