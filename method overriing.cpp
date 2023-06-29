#include<iostream>
using namespace std;
class ABC
{
public:
int a;
int display()
{
cout<<"Enter value for A : ";
cin>>a;
}
};
class XYZ
{
public:
int b;
int display()
{
cout<<"Enter value of B : ";
cin>>b;
}
};
class Child : public ABC, public XYZ
{
public:
int display()
{
ABC::display();
XYZ::display();
cout<<"A*B = "<<a*b<<endl;
cout<<"A+B="<<a+b<<endl;
cout<<"A/B="<<a/b<<endl;
cout<<"A-B="<<a-b<<endl;
}
};
int main()
{
Child obj;
obj.display();
return 0;
}