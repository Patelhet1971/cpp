#include<iostream>
using namespace std;
class abc
{
public:
int a;
int func1()
{
cout<<"Enter value for A : ";
cin>>a;
}
};
class def
{
public:
int b;
int func2()
{
cout<<"Enter value for B : ";
cin>>b;
}
};
class xyz : public abc, public def
{
public:
int c;
int func3()
{
cout<<"Enter value for C : ";
cin>>c;
}
};
class ghi : public xyz
{
public:
int d;
int func4()
{
cout<<"Enter value for D : ";
cin>>d;
cout<<"\nA*B*C*D="<<a*b*c*d<<endl;
}
};
class uvw : public xyz
{
public:
int func5()
{
cout<<"Multiplication done!!!";
}
};
int main()
{
ghi obj;
uvw obj1;
obj.func1();
obj.func2();
obj.func3();
obj.func4();
obj1.func5();
return 0;
}