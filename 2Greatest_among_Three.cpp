#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number 1 : ";
    cin>>a;
    cout<<"Enter the number 2 : ";
    cin>>b;
    cout<<"Enter the number 3 : ";
    cin>>c;
    

    if(a>b)
    {
        if(a>c)
        {
            cout<<"The number %d is greatest."<<a<<endl;
        }
        else
        {
            cout<<"The number %d is greatest."<<c<<endl;
        }
    }
    else
    {
        if(b>a)
        {
            if(b>c)
            {
                cout<<"The number %d is greatest."<<b<<endl;
            }
            else
            {
                cout<<"The number %d is greatest."<<c<<endl;
            }
        }
    }

    return main();

}