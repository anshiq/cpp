#include <iostream>
using namespace std;

class BASE
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void BASE ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int BASE ::getData1()
{
    return data1;
}
int BASE ::getData2()
{
    return data2;
}
class DERIVED : public BASE
{
    int data3;

public:
    void process();
    void display();
};
void DERIVED :: process(){
    data3 = data2* getData1();
}
void DERIVED :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<data2<<endl;
    cout<<data3;
}

int main()
{
    DERIVED k;
    k.setData();
    k.process();
    k.display();
}