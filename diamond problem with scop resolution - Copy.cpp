#include<iostream>
using namespace std;
class ABC
{
public:
int displayA()
{
cout<<"PATEL"<<endl;
}
};
class xyz: public ABC
{
public:
int displayB()
{
cout<<"HETKUMAR"<<endl;
}
};
class def : public ABC
{
public:
int displayC()
{
cout<<"I love my family"<<endl;
}
};
class  ghi : public xyz, public def
{
public:
int displayD()
{
cout<<"kai ni bhai....";
}
};
int main()
{
ghi obj;
obj.xyz::displayA();
obj.xyz::displayB();
obj.def::displayC();
obj.displayD();
return 0;
}