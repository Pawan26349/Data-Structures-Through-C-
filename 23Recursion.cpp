#include<iostream>
using namespace std;
int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}
//fucntion to find the power of any number : 
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower=power(n,p-1);
    return n*prevpower;
}

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int prevprod=factorial(n-1);
    return n*prevprod;
}

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,p;
    cin>>n;
    // cout<<Sum(n)<<endl;
    // cout<<power(n,p)<<endl;
    for(int i=0;i<n;i++)
        cout<<fibonacci(i)<<endl;

    return 0;
}