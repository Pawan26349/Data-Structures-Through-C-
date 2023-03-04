#include<iostream>
using namespace std ;

void swap(int* arr,int i,int r)
{
    int temp=arr[i];
    arr[i]=arr[r];
    arr[r]=temp;
}

int partition(int* arr,int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l ;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }

    }

    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int* arr,int l,int r)
{
    if(l<r){
        int pi=partition(arr,l,r);

        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    cout<<"The array is ; ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}