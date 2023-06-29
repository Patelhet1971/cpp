#include<iostream>
using namespace std;

class base1
{
	private:
		int a,b,c;
		public:
			void input1()
			{
				cout<<"enter the value a:";
				cin>>a;
				cout<<"enter the value b:";
				cin>>b;
			}
			void show1()
			{
				c=a+b;
				cout<<"sum="<<c<<endl;
			}
};
class base2
{
	private:
		int a,b,c;
		public:
			void input2()
			{
				cout<<"enter the value a:";
				cin>>a;
				cout<<"enter the value b:";
				cin>>b;
			}
			void show2()
			{
				c=a-b;
				cout<<"sub="<<c<<endl;
			}
};
class base3: public base1,public base2
{
	private:
		int a,b,c;
		public:
			void input3()
			{
				cout<<"enter the value:";
				cin>>a>>b;
			}
			void show3()
			{
				c=a*b;
				cout<<"mul="<<c<<endl;
			}
};
int main()
{
	base1 ob1;
	ob1.input1();
	ob1.show1();
	
	base2 ob2;
	ob2.input2();
	ob2.show2();
	
	base3 ob3;
	ob3.input3();
	ob3.show3();
	
	return 0;
}