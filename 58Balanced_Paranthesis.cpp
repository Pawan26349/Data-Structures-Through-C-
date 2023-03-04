#include<iostream>
#include<stack>
using namespace std;

bool valid(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
        }
        else if(s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
        }
        else if(s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    if(valid("{[()]}")){
        cout<<"This is balanced string .\n";
    }
    else{
        cout<<"This is unbalanced string.\n";
    }
    return 0;
}