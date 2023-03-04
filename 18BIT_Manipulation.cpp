#include<iostream>
using namespace std;
int togetbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setbit(int n,int pos)
{
    return ((n | (1<<pos)));
}

int clearbit(int n,int pos)
{
    return((n & ~(1<<pos)));
}

int updatebit(int n,int pos,int value)
{
    return( ((n & (n & ~(1<<pos))) | (value<<pos)));
}
int main()
{
    int pos;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the position : ";
    cin>>pos;

    //cout<<togetbit(n,pos);

    //cout<<setbit(n,pos)<<endl;

    //cout<<clearbit(n,pos)<<endl;

    cout<<updatebit(n,pos,1)<<endl; // the third one is the number or bit by which we have to update.
    return 0;


}