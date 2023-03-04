#include<iostream>
#include<istream>
using namespace std;
int main()
{
    int choice;
    cout<<"enter your choice : ";
    cin>>choice ;
    if(choice==1)
    {
        char arr[100]="hello world";
        int i=0;
        while(arr[i] != '\0')
        {
            cout<<arr[i]<<endl;
            i++;
        }
    }
    else if(choice==2)
    {
        char arr[100];
        cin>>arr;
        cout<<arr<<endl;
    }

    else if(choice==3)
    {
        int n;
        cout<<"enter the value of n : ";
        cin>>n;
        char arr[n+1];
        cin>>arr;
        int start=0,end=n-1;
        bool check=true;
        while(start<=end)
        {
            if(arr[start]!=arr[end])
            {   
                check=false;
                break;
            }
            start++;
            end--;
        }
        if(check==true)
        {
            cout<<"The string is panildrome."<<endl;
        }
        else
        {
            cout<<"The string is not a panildrome number ."<<endl;
        }
    }

    else if(choice==4)
    {
        // maximum word length.
        int n;
        cout<<"Enter the value of the n : ";
        cin>>n;
        char arr[n+1];
        cin.ignore();
        cin.getline(arr,n);
        cin.ignore();

        int i=0;
        int st=0,maxst=0;
        int currlen=0,maxlen=INT_MIN;
        while(1)
        {
            if(arr[i]==' ' || arr[i]=='\0')
            {
                if(currlen>maxlen)
                {
                    maxlen=currlen;
                    maxst=st;
                }
                currlen=0;
                st=i+1;
            }
            else
            {
                currlen++;
            }

            if(arr[i]=='\0')
            {
                break;
            }
            i++;
        }
        cout<<"the word of maximum length is : ";
        for(int i=0;i<maxlen;i++)
        {
            cout<<arr[i+maxst];
        }
        cout<<endl;
        cout<<"the maximum length of the word in sentence is : "<<maxlen<<endl;


    }
    return 0;
}