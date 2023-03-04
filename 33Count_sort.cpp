#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you wants to enter : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements into the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_ele){
            max_ele=arr[i];
        }
    }

    int count_arr[max_ele+1]={0};
    for(int i=0;i<n;i++){
        count_arr[arr[i]]+=1;
    }

    cout<<"The countable array is : ";
    for(int i=0;i<max_ele+1;i++){
        cout<<count_arr[i]<<" ";
    }
    cout<<endl;
    int count_arr1[max_ele]={0};
    int sum=0;

    for(int i=0;i<max_ele+1;i++)
    {
        sum=sum+count_arr[i];
        count_arr1[i]=sum;
    }

    for(int i=0;i<max_ele+1;i++){
        cout<<count_arr1[i]<<" ";
    }
    cout<<endl;
    int sorted_array[n];
    for(int i=n-1;i>=0;i--){
        count_arr1[arr[i]]=count_arr1[arr[i]]-1;
        sorted_array[count_arr1[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<sorted_array[i]<<" ";
    }
    cout<<endl;
    return 0;
}