#include<iostream>
using namespace std;

class student{
    public: // it means i can access the data members of the class also the outside of the class and we remove it then we can't use it .
    string name;
    int age;
    bool gender ;

    void printvalue(){
        cout<<"name = ";
        cout<<name;
        cout<<"age = ";
        cout<<age;
        cout<<"gender = ";
        cout<<gender;
    }
};

class student1{
    string name;
    public:
    int age;
    bool gender;
    void write_name(string s){
        name=s;
    }
    void print_value(){
        cout<<"name : "<<name;
        cout<<"age : "<<age;
        cout<<"gender : "<<gender;
    }
};

class student3{

    public:
    string name;
    int age;
    bool gender;

    student3(){
        cout<<"Default constructor"<<endl;
    } // default contructor
    student3(string s,int a,bool g){
        name=s;
        age=a;
        gender=g;
    }// paramertised constructor;

    student3(student &a){
        name=a.name;
        age=a.age;
        gender=a.gender;
    }// copy constructor. 

    bool operator == (student3 &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

    // destructor
    ~student3(){
        cout<<"this is destructor"<<endl;
    }
    void printvalue(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
    }

};

int main()
{
    // student a;
    // a.name="Pawan";
    // a.age=20;
    // a.gender=0; if we want to input these values one by one 

    // student arr[3]; //when you have to input the values of the data members in the class
    // for(int i=0;i<3;i++){
    //     cout<<"name = ";
    //     string s;
    //     cin>>s;
    //     arr[i].
    //     cout<<"age = ";
    //     cin>>arr[i].age;
    //     cout<<"gender = ";
    //     cin>>arr[i].gender;
    // }

    // student1 arr[3]; //when you have to input the values of the data members in the class
    // for(int i=0;i<3;i++){
    //     cout<<"name = ";
    //     string s;
    //     cin>>s;
    //     arr[i].write_name(s);
    //     cout<<"age = ";
    //     cin>>arr[i].age;
    //     cout<<"gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i=0;i<3;i++){
    //     arr[i].print_value();
    //     cout<<endl;
    // }


    // constructors.
    student3 a("pawan",20,0);
    a.printvalue();
    student3 b;
    student3 c=a;
    c.printvalue();


    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    // destructor is called to kill all the objects formed and it call at the end of main function.
    return 0;
}