#include<iostream>
#include<string>
#include<algorithm>
#include<istream>
using namespace std;
int main()
{
    // string str; // declare a string.
    // string str1(5,'n'); // another method to declare a string.
    // string str2="helloworld"; // another method to declare string.

    // cin>>str;
    // cout<<str;  // print the string.
    // cout<<str1;


    // string st;
    // getline(cin,st); // taking the string as input with the spaces.
    // cout<<st<<endl;

    // string str1;
    // string str2;
    // cout<<"Enter the first string  : ";
    // getline(cin,str1);
    // cout<<"Enter the second string  : ";
    // getline(cin,str2);
    // // str1.append(str2);
    // cout<<"The string after the append operating is : ";
    // cout<<str1+str2<<endl;


    // string str="hello world";
    // str.clear(); // clear function is used to clear the string.
    // cout<<str<<endl;

    string s1="hellotoallthepeople";
    // string s2="y ";
    // if(s2.compare(s1)==0)
    // {
    //     cout<<"The strings are equal."<<endl;
    // }
    // cout<<s2.compare(s1)<<endl; // use to compare the two strings.
    // s1.clear();
    // if(s1.empty()) // to check that the string is empty or not .
    // {
    //     cout<<"The string is empty."<<endl;
    // }

    // s1.erase(3,3); // this function is use to delete particular characters in a string. //(first index,how many wants to delete.)
    

    // cout<<s1.find("com")<<endl; // fuction use to find the index of the element in the string.

    // s1.insert(3,"hello"); // to insert the element in the string.

    
    // cout<<s1.length() <<endl; // to find the length of the string.

    // cout<<s1.substr(3,6)<<endl; // to find the substring from a string. // first is index and other is how many characters we want from that string.

    // cout<<stoi(s1)<<endl; // used to convert the string into the integer.

    // cout<<to_string(s1)+"hello"<<endl; // use to convert the number into the string .

    sort(s1.begin(),s1.end());

    cout<<s1<<endl;


    return 0;
}