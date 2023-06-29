#include<iostream>
using namespace std;
class GOOD
{
public:
int a;
int func1()
{
cout<<"Enter value for A : ";
cin>>a;
}
};
class DAD : public GOOD
{
public:
int b;
int func2()
{
cout<<"Enter value for B : ";
cin>>b;
}
};
class ME : public DAD
{
public:
int c;
int func3()
{
cout<<"Enter value for C : ";
cin>>c;
cout<<"A+B+C="<<a+b+c<<endl;
}
};
class SIS : public DAD
{
public:
int func4()
{
cout<<"Addition done!!!";
}
};
int main()
{
ME obj; 
SIS obj1; 
obj.func1();
obj.func2();
obj.func3();
obj1.func4();
return 0;
}