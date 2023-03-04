#include<iostream>
using namespace std;


// Inheritence is the very important concept of the OOPs
// Under this property the child class can inherited the properties of the base class. or parent class;


// there are two main terminology that are used under this : 
// 1. Derived class : it is the child class that inherit the properties from the base class or parent class;
// 2. Base class : it is the parent class from which the property is inherited .

/*
There are many types of inheritence : 
1. single 
2. Multilevel
3. Multiple
4. Hierarchical
5. Hybrid 
*/

// example of single inheritence
// 1 
// class teacher {
//     public:
    
//     void hello(){
//         cout<<"hello world";
//     }
// };

// class student : public teacher{

// };
// int main()
// {
//     student a;
//     a.hello();
// }


// 2 Multiple inheritence
// class hod{
//     public:
//     void func1(){
//         cout<<"hod "<<endl;
//     }
// };

// class teachers{
//     public:
//     void func2(){
//         cout<<"teachers"<<endl;
//     }
// };

// class student: public hod,public teachers{

// };

// int main(){
//     student a;
//     a.func1();
//     a.func2();
//     return 0;
// }


// 3.Multilevel inheritence

// class hod{
//     public:
//     void func1(){
//         cout<<"hod"<<endl;
//     }
// };

// class teachers: public hod{
//     public:
// };

// class student : public teachers{
//     public:

// };

// int main()
// {
//     student a;
//     a.func1();
//     return 0;
// }
