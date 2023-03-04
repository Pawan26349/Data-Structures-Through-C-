#include<iostream>
#include<climits>  // it contains the terms just like INT_MAX or INT_MIN;
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        int mid=left+((right-left)/2);
        if(arr[mid]==key)
        {
            return mid+1;
        }
        else if(key<arr[mid])
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements you wants to enter  : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int min_num=INT_MAX;
    // int max_num=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     max_num=max(max_num,arr[i]);
    //     min_num=min(min_num,arr[i]);
    // }
    // cout<<"The array you entered is : ";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<"The minimum element in the array is : "<<min_num<<endl;
    // cout<<"The maximum element in the array is : "<<max_num<<endl;
    // return main();

    int key;
    cout<<"Enter the key or element you wants to search : ";
    cin>>key;
    int i=0;
    // for(i=0;i<n;i++)
    // {
    //     if(key==arr[i])
    //     {
    //         cout<<"The element is found at position %d "<<i+1;
    //         break;
    //     }
    // }
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=binarysearch(arr,size,key);
    if(ans!=-1)
    {
        cout<<"The key is found at position : "<<ans<<endl;
    }
    else
    {
        cout<<"The item is not present in the array .";
    }
    cout<<endl;
    return main();
}