#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s1;
    
    cout<<"Enter the sting : ";
    getline(cin,s1);

    // convert the stirg into the upper case.
    // for(int i=0;i<=s1.length();i++)
    // {
    //     if(s1[i]>='a' && s1[i]<='z')
    //     {
    //         s1[i]-=32;
    //     }
    // }

    // convert the string into the lower case.
    // for(int i=0;i<=s1.length();i++)
    // {
    //     if(s1[i]>='A' && s1[i]<='Z')
    //     {
    //         s1[i]+=32;
    //     }
    // }


    // transform(s1.begin(),s1.end(),s1.begin(),::toupper); // function of(algo) to convert in uppercase. 
    // cout<<s1<<endl;
    // transform(s1.begin(),s1.end(),s1.begin(),::tolower); // function  to convert in lower case.


    // program to form the maximum number from the given string.
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<endl;

    return 0;
}