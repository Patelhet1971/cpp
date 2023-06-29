#include<iostream>
using namespace std;
 
class base {
public:
    virtual void print()
    {
        cout << "patel het\n";
    }
    void show()
    {
        cout << "thank you!!!\n";
    }
};
class derived : public base {
public:
    void print()
    {
        cout << "patel het\n";
    }
 
    void show()
    {
        cout << "Thank you!!!\n";
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}