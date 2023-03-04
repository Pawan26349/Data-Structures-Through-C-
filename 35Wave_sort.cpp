#include<iostream>
using namespace std;

void swap(int arr[],int s1,int s2){
    int temp;
    temp=arr[s1];
    arr[s1]=arr[s2];
    arr[s2]=temp;
    return ;
}

void wavesort(int arr[],int n){
    int i=1;
    while(i!=n){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr,i,i+1);
        }
        i+=2;
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements you wants to enter : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    wavesort(arr,n);
    cout<<"The elements of the array after the sorting algo is : ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    return main();

}