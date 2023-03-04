#include<iostream>
using namespace std;

void permutations(string str,string ans){
    if(str.length()==0){
        cout<<ans<<endl;
        return ;
    }
    for(int i=0;i<str.length();i++){
        char st=str[i];
        string res=str.substr(0,i)+str.substr(i+1);
        permutations(res,ans+st);
    }

}
int main()
{
    string s="ABC";
    permutations(s,"");
    return 0;
}