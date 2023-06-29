#include<iostream>
using namespace std;
class abc
{
	int x,y;
	public:
		void input()
		{
			cout<<"enter the first value:";
			cin>>x;
		}
		void input1()
		{
			cout<<"enter the second value:";
			cin>>y;
		}
		abc operator + (abc &ob)
		{
			abc a;
			a.x = x + ob.x;
			return (a);
		}
		void print()
		{
			cout<<"The sum of two number is:"<<x<<endl;
		}
};
int main()
{
	abc x1,y1,total;
	x1.input();
	y1.input1();
	total = x1 + y1;
	total.print();
	return 0;
}