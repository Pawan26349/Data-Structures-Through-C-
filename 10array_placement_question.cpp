#include<iostream>
using namespace std;
void maxfind(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int maxele=INT_MIN;
        for(int j=0;j<=i;j++)
        {
            maxele=max(maxele,arr[j]);
        }
        cout<<maxele<<endl;
    }
    return ;
}

void sumsubarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<" ";
        }
    }
    return ;
}

void longestarithmetic_subarray(int arr[],int n)
{
    int pd=arr[1]-arr[0];
    int j=2;
    int ans=2;
    int curr=2;
    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
}

void recordbreaker(int arr[],int n)
{
    int i=0;
    int maxele=INT_MIN;
    
    while(i<n)
    {
        int nextele=arr[i+1];
        if(i==0)
        {
            if(arr[i]>nextele)
            {
                cout<<i<<" ";
            }
        }
        else if(i==n-1)
        {
            if(arr[i]>maxele)
            {
                cout<<i<<" ";
            }
        }
        else
        {
            if(arr[i]>maxele && arr[i]>nextele)
            {
                cout<<i<<" ";
            }
        }
        maxele=max(arr[i],maxele);
        i++;
    }
    return ;

}

void first_repeating_element(int arr[],int n)
{
    int ind[100];
    for(int i=0;i<100;i++)
    {
        ind[i]=-1;
    }
    int minele=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ind[arr[i]]==-1)
        {
            ind[arr[i]]=i;
        }
        else
        {
            minele=min(minele,ind[arr[i]]);
        }
    }
    if(minele==INT_MAX)
    {
        cout<<"There is not duplicate element.";
    }
    else
    {
        cout<<"The first repreating smallest index element is of index : "<<minele<<endl;
    }
    return ;
}   

void sum_of_subarray(int arr[],int n)
{
    int sum;
    cout<<"Enter the sum you wants to find : ";
    cin>>sum;

    int j=0;
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(j=i;j<n;j++)
        {
            curr_sum=curr_sum+arr[j];
            if(curr_sum==sum)
            {
                cout<<"The indexes of the subarray is : "<<i+1<<" and "<<j+1<<endl;
            }
        }
        
    }
    return;
    
}

void missing_number(int arr[],int n)
{
    unsigned int N=100;   
    int check_arr[N];
    for(int i=0;i<N;i++)
    {
        check_arr[i]=-1;
    }
    
    for(int i=0;i<n;i++)
    {
        if(check_arr[arr[i]]==-1 && arr[i]>=0)
        {
            check_arr[arr[i]]=1;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(check_arr[i]==-1)
        {
            cout<<"The missing smallest number is : "<<i<<endl;
            break;
        }
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter the number of elements you wants to enter : " ;
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array : ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    short int choice ;

    cout<<"Enter your choice : ";
    cin>>choice;


    if(choice==1)
    {
        maxfind(arr,n);
    }
    else if(choice==2)
    {
        sumsubarray(arr,n);
    }
    else if(choice==3)
    {
        longestarithmetic_subarray(arr,n);
    }
    else if (choice==4)
    {
        recordbreaker(arr,n);
    }
    else if(choice==5)
    {
        first_repeating_element(arr,n);
    }

    else if(choice==6)
    {
        sum_of_subarray(arr,n);
    }

    else if(choice==7)
    {
        missing_number(arr,n);
    }
    
    return 0;
}
