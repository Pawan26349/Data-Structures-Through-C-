#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a; // the first way to declare the vector and use it .
    int n;
    cout<<"Enter the number of elements you wants to enter : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        a.push_back(ele);
    }

    // cout<<"The elements in the vector are : "; // 1st way to print.
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }

    // vector<int>::iterator it;   // 2nd way to print.
    // for(it=a.begin();it!=a.end();it++){
    //     cout<<*it<<" ";
    // }


    // for(auto element:a){     // 3rd way to print .
    //     cout<<element<<" ";
    // }

    // a.pop_back(); // This is used to delete the last element from the dynamic array .

    // cout<<endl;
    // vector<int> v (3,50);  // here 1st parameter tells the size of the dynamic array and the 2nd parameter tells the value inside the dynamic array .

    // swap(a,v); // here this fucntion is used to swap the values of the two vectors you formed.
     

    sort(a.begin(),a.end());
    
    for(auto ele:a){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}