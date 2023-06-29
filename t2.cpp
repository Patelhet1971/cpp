#include<iostream>
using namespace std;
class abc
{
	public:
		void display()
		{
			cout<<"patel;
		}
};
class def : public abc
{
	public:
		void display1()
		{
			cout<<"het\n";
		}
};
class xyx: public abc
{
	public:
		void display2()
		{
			cout<<"sanjaybhai\n";
		}
};
class ghi: public def, public xyx
{
	public:
		void display3()
		{
			cout<<"power of patel\n";
		}
};

int main()
{
	ghi ob;
	ob.def::display();
	ob.def::display1();
	ob.ghi::display2();
	ob.display3();
	return 0;
	
}