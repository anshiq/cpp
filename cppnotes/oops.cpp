#include <iostream>
using namespace std;
// classes are better than structures.
// classes are extensions of structures.
// to use structure syntex starts form struct 'name of str'
// to use classes syntex starts form class 'name of class'
// calling structure or classes both are same written.
/*
In structures everything is public.
In classes there is better security and better data hidding.
In classes we can also define function & methods with other data types (private or public).

*/
class employeee
{
private: // private datatype can't be access directly outside the class code.
    int a, b, c;

public: // public datatype can be access from anywhere.
    int d, e;
    // functions
    void setdata(int a1,int b1,int  c1); // function code can be written outside the class OR
    void getdata(){  // function code can be written inside the class.
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};

// To call function inside the class to outside
void employeee :: setdata(int a1,int b1,int c1){
    a= a1; b = b1; c = c1;
}

int main()
{
    employeee harry; // calling the class.
    //harry.a = 5 --> this will through error because its a private variable.
     harry.d = 34;
    harry.e = 40; // class ka koi function hi private variables ko access kr sakte hi.
    harry.setdata(1,2,5); // private variables can only be overwrite using a function present in class.
    harry.getdata();
}