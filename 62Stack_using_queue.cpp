#include<iostream>
#include<queue>
using namespace std;

//Method 1 where our cost of push is more .
// class stack{
//     queue<int> q1;
//     queue<int> q2;
//     int N;

//     public:
//     stack(){
//         N=0;
//     }

//     void push(int ele){
//         q2.push(ele);
//         N++;
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp;
//         temp=q1;
//         q1=q2;
//         q2=temp;
//     }

//     void pop(){
//         q1.pop();
//         N--;
//     }

//     int top(){
//         return q1.front();
//     }

//     int size(){
//         return N; 
//     }
// };

//Method 2 where the cost of the pop is more .
class stack{
    queue<int> q1;
    queue<int> q2;
    int N;

    public:
    stack(){
        N=0;
    }

    void push(int ele){
        q1.push(ele);
        N++;
    }

    void pop(){
        if(q1.empty()){
            return ;
        }
        int i=N;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }

};


int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top();
    st.pop();
    cout<<st.top();
    return 0;
}