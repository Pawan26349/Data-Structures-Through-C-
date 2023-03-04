#include<iostream>
using namespace std;

// function to find out the number of elements divisible with the given numebers a and b;
void divisible(int n,int a,int b)
{
    int r1=n/a;
    int r2=n/b;
    int r3=n/(a*b);
    int result=((r1+r2)-r3);
    cout<<result;
    return;
}

void gcd(int n1,int n2)
{
    if(n1<n2)
    {
        int temp;
        temp=n1;
        n1=n2;
        n2=temp;
    }
    int r;
    while(r!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    cout<<n1<<endl;
    return;
}
int main()
{
    // int n,a,b;
    // cin>>n>>a>>b;
    // divisible(n,a,b);
    int n1,n2;
    cin>>n1>>n2;
    gcd(n1,n2);
    return main();
}