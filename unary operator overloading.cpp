#include<iostream>
using namespace std;
class abc
{
	private:
	int a,b,c;
	public:
		void get(int p,int q,int r)
		{
			a=p;
			b=q;
			c=r;
		}
		void display();
		void operator -();
};
void abc::display()
{
	cout<<"a ="<<a<<endl<<"b ="<<b<<endl<<"c ="<<c<<endl;
}
void abc::operator -()
{
	a=-a;
	b=-b;
	c=-c;
}
int main()
{
	abc obj;
	obj.get(5,6,7);
	obj.display();
	-obj;
	obj.display();
	return 0;
}