#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int ind=0;ind<n-1;ind++)
    {
        int minele=ind;
        for(int j=ind;j<n;j++)
        {
            if(arr[j]<arr[minele])
            {
                minele=j;
            }
        }
        int temp;
        temp=arr[ind];
        arr[ind]=arr[minele];
        arr[minele]=temp;
    }
    return ;
}



void bubblesort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return ;
}

void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
    return;
}

void mergesort()
{
    int n1;
    cout<<"Enter the value of n1 : ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements in the array 1 : ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cout<<"Enter the value of n2 : ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements in the array 2 : ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    
    int arr3[n1+n2];
    int i=0,j=0,ind=0;
    while(i<=n1 || j<=n2 )
    {
        int k=ind;
        if(arr1[i]<=arr2[j])
        {
            if(ind==0)
            {
                arr3[ind]=arr1[i];
            }
            else
            {
                while(arr1[i]<arr3[k-1] && (k-1)>=0)
                {
                    arr3[k]=arr3[k-1];
                    k--;
                }
                arr3[k]=arr1[i];
            }
            i+=1;
        }
        else
        {
            if(ind==0)
            {
                arr3[ind]=arr2[j];
            }
            else
            {
                while(arr2[j]<arr3[k-1] && (k-1)>=0)
                {
                    arr3[k]=arr3[k-1];
                    k--;
                }
                arr3[k]=arr2[j];
            }
            j+=1;
        }
        ind+=1;
    }

    cout<<"The sorted array is : ";
    for(int i=0;i<(n1+n2);i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    return;
}


int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    short int choice;
    cout<<"Enter your choice : ";
    cin>>choice ;

    if(choice==1)
    {
        selectionsort(arr,n);
    }
    else if(choice==2)
    {
        bubblesort(arr,n);
    }
    else if(choice==3)
    {
        insertionsort(arr,n);
    }
    else if(choice==4)
    {
        mergesort();
    }


    
    cout<<"The sorted array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return main();
}
