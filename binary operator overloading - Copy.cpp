#include<iostream>
using namespace std;
class abc{
	int one,two;
	public:
		void get(int a,int b)
		{
			one =a;
			two =b;
		}
		void display()
		{
			cout<<"one ="<<one<<endl<<"two ="<<two<<endl;
		}
		abc operator *(abc c);
};
abc abc::operator *(abc c)
{
	abc temp;
	temp.one = one*c.one;
	temp.two = two*c.two;
	return temp;
}