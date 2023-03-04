#include<iostream>
using namespace std;
int main()
{
    int choice;
    int n1,n2;
    cout<<"Enter your choice : ";
    cin>>choice ;
    cout<<"Enter the number : ";
    cin>>n1>>n2;
    switch(choice)
    {
        case 1:
        {
            cout<<n1+n2<<endl;
            break;
        }
        case 2:
        {
            cout<<n1-n2<<endl;
            break;
        }
        case 3:
        {
            cout<<n1*n2<<endl;
            break;
        }
        case 4:
        {
            cout<<n1/n2<<endl;
            break;
        }
        default:
        {
            cout<<"Enter the number in the range 1 to 4 .";
            break;
        }

    }
    return main();
}