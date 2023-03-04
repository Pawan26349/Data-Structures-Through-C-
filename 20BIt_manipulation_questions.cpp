#include<iostream>
using namespace std;

void findunique(int arr[],int s)
{
    int xorsum=0;
    for(int i=0;i<s;i++)
    {
        xorsum=xorsum^arr[i];
    }
    cout<<xorsum<<endl;
}
int main()
{
    int arr[]={2,4,6,4,6,2,3,10};
    int s=sizeof(arr)/sizeof(arr[0]);

    findunique(arr,s);
    return 0;
}