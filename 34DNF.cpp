#include<iostream>
using namespace std;

void swap(int arr[],int s1,int s2 ){
    int temp;
    temp=arr[s1];
    arr[s1]=arr[s2];
    arr[s2]=temp;
    return ;
}

void DNF(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid!=(high)){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,high,mid);
            mid++;
            high--;
        }
    }
    return ;

}
int main()
{
    int n;
    cout<<"Enter the number of elements you wants to enter : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    DNF(arr,n);

    cout<<"The array after the sorting is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0 ;

}