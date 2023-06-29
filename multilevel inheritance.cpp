+32123
#include<iostream>
using namespace std;
class H
{
	public:
		void display_H()
		{
			cout<<"My name is het"<<endl;
		}
};
class E: public H
{
	public:
		void display_E()
		{
			cout<<"I am from vadoadara"<<endl;
		}
};
class T: public E
{
	public:
		void display_T()
		{
			cout<<"I am styuding in atmiya university"<<endl;
		}
};
int main()
{
	T patel;
	patel.display_H();
	patel.display_E() ;
	patel.display_T();
	return 0;
}
