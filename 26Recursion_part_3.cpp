#include<iostream>
using namespace std;

void permutations(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    for(int i=0;i<str.length();i++)
    {
        char s=str[i];
        string ros=str.substr(0,i)+str.substr(i+1);

        permutations(ros,ans+s);
    }
}

// function to count the number of paths : 
int countpath(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++)
    {
        count+=countpath(s+i,e);
    }
    return count;
}

//function to find the number of paths to pass the maze by bee;
int countpathmaze(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    if(i>=n || j>=n)
    {
        return 0;
    }

    return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);
}
int main()
{
    // permutations("ABC","");

    // cout<<countpath(1,6)<<endl;

    cout<<countpathmaze(3,0,0);
    return 0;
}