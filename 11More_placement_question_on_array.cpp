#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>

using namespace std;

void subarray()
{
    // The time complexity is O(n^3);
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The subarrays in the given array are : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<' ';
            }
            cout<<endl;
        }
        
    }
    return ;
}

void maximum_subarray_sum()
{
    // The time complexity is O(n^2);
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            maxsum=max(maxsum,sum);
        }
    }
    cout<<"The maximum sum of the subarray is : "<<maxsum<<endl;
    return;
}

void max_sum()
{
    // The maximum sum of time complexity O(n)
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<=0)
        {
            sum=0;
        }
        max_sum=max(max_sum,sum);
    }   

    cout<<"The maximum sum is : "<<max_sum<<endl;
    return;
}

void max_circular_array()
{
    int n;
    cout<<"Enter the value of n : " ;
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unsigned int sum_of_array=0;
    for(int i=0;i<n;i++)
    {
        sum_of_array+=arr[i];
    }

    
    for(int i=0;i<n;i++)
    {
        arr[i]*=-1;
    }
    int sum=0;
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
        {
            sum=0;
        }
        max_ele=max(max_ele,sum);
    }
    int maximum_sum_subarray=sum_of_array + max_ele;
    cout<<"The maximum subarray sum is : "<<maximum_sum_subarray<<endl;
     
    return ;
}

void pairsum()
{
    // The time complexity is  : O(n^2)
    int n;
    cout<<"Enter the value of n : " ;
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value you wants to search : ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==key)
            {
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
    return;
}

void pairsum2()
{
    // The time complexity is  : O(n^2)
    int n;
    cout<<"Enter the value of n : " ;
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the value you wants to search : ";
    cin>>key;

    sort(arr,arr+n);

    int left=0,right=n-1;
    while(left<=right)
    {
        int sum=arr[left]+arr[right];
        if(sum==key)
        {
            cout<<left<<" "<<right<<endl;
            return ;
        }
        else if(sum<key)
        {
            left++;
        }
        else
        {
            right--;
        }
        
    }
    

}

int main()
{
    short int choice;
    cout<<"Enter your choice : ";
    cin>>choice;
    if(choice==1)
    {
        subarray();
    }
    else if(choice==2)
    {
        maximum_subarray_sum();
    }
    else if(choice==3)
    {
        max_sum();
    }
    else if(choice==4)
    {
        max_circular_array();
    }
    else if(choice==5)
    {
        pairsum();
    }
    else if(choice==6)
    {
        pairsum2();
    }
    return 0;
}

