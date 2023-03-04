#include<iostream>
#include<stack>
using namespace std;

int precedence(char s){
    if(s=='^'){
        return 3;
    }
    else if(s=='*' || s=='/'){
        return 2;
    }
    else if(s=='+' || s=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string reverse_string(string s){
    string rev="";
    for(int i=s.length()-1;i>=0;i--){
        rev+=s[i];
    }
    return rev;
}

string change_parenthesis(string s){
    string res=s;
    for(int i=0;i<res.length();i++){
        if(res[i]=='('){
            res[i]=')';
        }
        else if(res[i]==')'){
            res[i]='(';
        }
    }
    return res;
}

string infix_to_prefix(string s){
    string str=change_parenthesis(reverse_string(s));
    string res="";
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            res+=str[i];
        }
        else if(str[i]=='('){
            st.push(str[i]);
        }
        else if(str[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else {
            while(!st.empty() && precedence(st.top())>precedence(str[i])){
                res+=st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    res=reverse_string(res);
    return res;

}

int main()
{
    cout<<infix_to_prefix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}