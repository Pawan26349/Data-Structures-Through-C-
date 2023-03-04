#include<iostream>
using namespace std;

// polymorphism means Poly means "Many " and phorism means : " forms " so when there was many forms of the same thing then it was known as polymorphism
// just like a person is to be a father and son at the same time ,
// and like a carbon have many froms just like coal,carbondioxide, and diamond;

/*There are many types of polymorphism : 
1.Compile time 
    1.1 function overloading 
    1.2 operator overloading
2.Run time 
    2.1 virtual function 
*/


// Function Overloading.
class Pawan{
    public:

    void func()
    {
        cout<<"This is the function with no argument ."<<endl;
    }

    void func(int n){
        cout<<"This is the function with a single argument int "<<endl;
    }
     
    void func(double n){
        cout<<"This is the function with a single argument of double data type."<<endl;
    }


};


// Operator Overloading
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {real = r;   imag = i;}
     
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};


// Now we see the run time polymorphism
class base{
    public:
    virtual void print(){
        cout<<"This is base class "<<endl;
    }
    virtual void display(){
        cout<<"This is parent class "<<endl;
    }
};

class derived : public base {
    public:
    void print(){
        cout<<"This is child class "<<endl;
    }
    void display(){
        cout<<"This is children class "<<endl;
    }
};

int main()
{
    // Pawan a;
    // a.func();
    // a.func(4);
    // a.func(3.2);

    // Complex c1(7,12);
    // Complex c2(11,13);
    // Complex c3= c1 + c2;
    // c3.print();


    derived a;
    a.print();
    return 0;

}