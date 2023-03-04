#include<Iostream>
using namespace std;
bool check_sorted_array(int arr[],int size)
{
    if(size==1)
    {
        return true;
    }
    int restarray=check_sorted_array(arr+1,size-1);
    return (arr[0]<arr[1] && restarray);
}

// program to print the number till last from n in decresing order.
void dec(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    dec(n-1);
}
// program to print the number in increasing order.
void inc(int n)
{
    if(n==0)
    {
        return ;
    }
    inc(n-1);
    cout<<n<<" ";
}

//program to find the first occurence and last occurence of element in the array.
int firstoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstoccurence(arr,n,i+1,key);
}
int lastoccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarray=lastoccurence(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[8]={1,2,6,4,5,2,4,6};
    // cout<<check_sorted_array(arr,5)<<endl;
    // int n;
    // cin>>n;
    // dec(n);
    // inc(n);
    int key;
    cout<<"Enter the number you wants to search : ";
    cin>>key;
    cout<<firstoccurence(arr,8,0,key);
    cout<<lastoccurence(arr,8,0,key);
    return 0;
}