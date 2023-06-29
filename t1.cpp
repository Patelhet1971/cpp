#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b,c;
		public:
			void disp()
			{
				cout<<"enter a value:"<<endl;
				cin>>a;
				cout<<"enter b value:"<<endl;
				cin>>b;
				c=a+b;
			cout<<"sum="<<c<<endl;
				
			}
			
};
class xyz: public abc
{
	private:
		int a,b,c;
		public:
			void disp1()
			{
				cout<<"enter a value:"<<endl;
				cin>>a;
				cout<<"enter b value:"<<endl;
				cin>>b;
				c=a-b;
			cout<<"sub="<<c<<endl;
			}
			
};
int main()
{
	xyz ob;
	ob.disp();
	ob.disp1();
	return 0;
}