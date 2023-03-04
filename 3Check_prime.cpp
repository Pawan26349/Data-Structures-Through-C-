// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     int i;
//     cout<<"Enter the number : ";
//     cin>>num;
//     for(i=2;i<(num/2)+1;i++)
//     {
//         if(num%i==0)
//         {
//             break;
//         }
//     }
//     if(i==(num/2)+1)
//     {
//         cout<<"The number is prime number ."<<endl;
//     }
//     else
//     {
//         cout<<"The number is not a prime number ."<<endl;
//     }
//     return main();
// }

#include<iostream>
using namespace std;
int main()
{
    int r1,r2;
    cin>>r1>>r2;
    for(int num=r1;num<=r2;num++)
    {
        int i;
        for(i=2;i<(num/2)+1;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==(num/2)+1)
        {
            cout<<num<<" ";
        }
    }
    return 0;
}