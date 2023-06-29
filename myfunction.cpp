#include<iostream>
using namespace std;
inline myfunction(int a)
{
	cout<<"overloading sample"<<a<<endl;
}
inline myfunction(float a)
{
	cout<<"overloading sample"<<a<<endl;
}
int main()
{
	int a;
	myfunction(1);
	myfunction(2);
	myfunction(3);
	return 0;
}