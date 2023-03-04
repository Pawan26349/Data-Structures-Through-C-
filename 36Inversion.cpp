#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements you wants to enter : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :  ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inv++;
            }
        }
    }
    cout<<inv<<endl;
    return 0;
}
