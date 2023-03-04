#include<iostream>
#include<string.h>
using namespace std;

void reverse(string str)
{
    if(str.length()==0)
    {
        return ;
    }
    string res=str.substr(1);
    reverse(res);
    cout<<str[0]<<" ";
}
// to replace a string with another one ;

void replacepi(string s)
{
    if(s.length()==0)
    {
        return ;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacepi(s.substr(1));
    }
}

void towerofhanoi(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"move disk "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);

}

//function to remove the duplicates from a string .
string removedup(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string res=removedup(str.substr(1));
    if(ch==res[0])
    {
        return res;
    }
    return (ch+res);
}


string put_all_x_at_end(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string res=put_all_x_at_end(str.substr(1));
    if(ch=='x')
    {
        return res+ch;
    }
    return ch+res;
}

// program to print all substring of a string : 
void substring(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch=str[0];
    string res=str.substr(1);

    substring(res,ans);
    substring(res,ans+ch);
}

// program to print all the substring along with the asscii code of that number .
void subsequence(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch=str[0];
    int asc=ch;
    string res=str.substr(1);

    subsequence(res,ans);
    subsequence(res,ans+ch);
    subsequence(res,ans + to_string(asc));
}

// print all possible strings made from keypad phone numbers.
string arr[]={"","./","abc","def","ghi","jkl","mno","pqr","stu","wxyz"};
void print_all_possible(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string code=arr[ch-'0'];
    string res=str.substr(1);

    for(int i=0;i<code.length();i++)
    {
        print_all_possible(res,ans+code[i]);
    }
}



int main()
{
    // string a="pippppiiiipi";
    // reverse(a);
    // replacepi(a);
    // towerofhanoi(3,'A','B','C');
    // cout<<removedup("aaaabbbbccccdddd");
    // cout<<put_all_x_at_end("axfffxxxvbsxgssx");
    // substring("ABC","");
    // subsequence("AB","");
    print_all_possible("23","");
    
    return 0;

}