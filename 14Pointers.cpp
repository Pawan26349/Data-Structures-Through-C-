#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int arr[]={1,2,3,4,5};
    // int *ptr=arr;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<*(arr+i)<<endl;
    // }
    // int *ptr=arr;
    // cout<<ptr<<endl;
    // cout<<arr<<endl;

    int a=10;
    int b=20;
    int *aptr=&a;
    int *bptr=&b;
    swap(&a,&b);
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}