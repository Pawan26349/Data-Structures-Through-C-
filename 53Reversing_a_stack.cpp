#include<iostream>
#include<stack>
using namespace std;

void insert_at_bottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return ;
    }
    int top_ele=st.top();
    st.pop();
    insert_at_bottom(st,ele);
    st.push(top_ele);
}

void reverse_stack(stack<int> &st){
    if(st.empty()){
        return ;
    }
    int ele=st.top();
    st.pop();
    reverse_stack(st);
    insert_at_bottom(st,ele);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    reverse_stack(st);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
}