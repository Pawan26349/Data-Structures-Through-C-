#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int powerof2(int n)
{
    return ((n && !(n & (n-1))));
}

int numberof1(int n)
{
    int count=0;
    int s;
    while(n)
    {
        n=(n&(n-1));
        count++;
    }
    return count;
}

void subset(int arr[],int s)
{
    for(int i=0;i<(1<<s);i++)
    {
        for(int j=0;j<s;j++)
        {
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    //cout<<powerof2(n);

    // cout<<numberof1(n)<<endl;

    int arr[]={1,2,3,4,5};
    int s=sizeof(arr)/sizeof(arr[0]);

    subset(arr,s);

    return 0;
}