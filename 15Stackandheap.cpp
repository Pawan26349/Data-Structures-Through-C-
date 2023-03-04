#include<iostream>
using namespace std;
int main()
{
    int a=10; // alocating the space in the memory stack.
    int *p=new int(); // allocating the space in the heap(free memory).
    *p=10;
    cout<<p<<endl;
    cout<<*p<<endl;
    delete(p); // you are deleting the value of p from the heap but still the p points to that address in the heap where the data is to be stored.
    *p=20;
    cout<<p<<endl;
    cout<<*p<<endl;

    delete(p);

    int *p=new int[4]; // creating an array in the heap; // allocation of the heap to the p;
    cout<<"Enter the element : ";
    for(int i=0;i<4;i++)
    {
        cin>>p[i];
    }

    for(int i=0;i<4;i++)
    {
        cout<<*(p+i)<<" ";
    }
    delete []p; // deallocation of the space from the memory.
    cout<<*p<<endl;
    p=NULL; // deleting the p from the memory stack permanently.

    cout<<*p<<endl;

    return 0;

}