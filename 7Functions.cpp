#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void fibo(int n)
{
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<' ';
        a=a+b;
        b=a-b;
    }
    return;
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int pattern(int n, int r)
{

    int a=fact(n);
    int b=fact(n-r);
    int c=fact(r);
    int result=a/(b*c);
    return result;
}
bool checktrip(int x,int y , int z)
{
    int a=max(x,max(y,z));
    int b;
    int c;
    if(a!=x && a!=y)
    {
        b=x;
        c=y;
    }
    else if(a!=y && a!=z)
    {
        b=y;
        c=z;
    }
    else
    {
        b=x;
        c=z;
    }
    if(a*a == b*b + c*c)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    short int i ;
    cout<<"Enter your option : ";
    cin>>i;
    if(i==1)
    {
        short int n1;
        short int n2;
        cout<<"Enter the first number :  ";
        cin>>n1;
        cout<<"Enter the second number ; ";
        cin>>n2;
        for(int i=n1;i<=n2;i++)
        {
            if(prime(i))
            {
                cout<<i<<" ";
            }
        }
    }
    else if(i==2)
    {
        short int n;
        cout<<"Enter the number : ";
        cin>>n;
        fibo(n);
    }
    else if(i==3)
    {
        short int n;
        cout<<"Enter the number : ";
        cin>>n;
        fact(n);
    }
    else if(i==4)
    {
        short int n,r;
        cout<<"Enter the value of the n : ";
        cin>>n;
        cout<<"Enter the value of the r : ";
        cin>>r;
        int a=fact(n);
        int b=fact(n-r);
        int c=fact(r);
        int result=a/(b*c);
        cout<<result;
    }
    else if(i==5)
    {
        short int n;
        cout<<"Enter the value : ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cout<<pattern(i,j)<<" ";
            }
            cout<<endl;
        }
    }
    else if(i==6)
    {
        int x,y,z;
        cout<<"Enter the values ; ";
        cin>>x>>y>>z;
        if(checktrip(x,y,z))
        {
            cout<<"it is a pythagorean triplet ";
        }
        else
        {
            cout<<"It is not a pythagorean triplet .";
        }
        
    }
    cout<<endl;
    return main();
}