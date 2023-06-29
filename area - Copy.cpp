#include<iostream>
using namespace std;
#define pie 3.14

area(int r)
{
	cout<<"area of circle:"<<pie*r*r<<endl;
	return 0;
}
area(float a)
{
	cout<<"area of square:"<<a*a<<endl;
	return 0;
}
area(double l,double b)
{
	cout<<"area of rectangle:"<<l*b<<endl;
	return 0;
}
area(long h,long j)
{
	cout<<"area of triangle:"<<j/2<<endl;
	return 0;

}
int main()
{
	int r;
	float a;
	double l,b;
	long h,j;
	cout<<"enter radius for circle:"<<endl;
	cin>>r;
	cout<<"enter side for square:"<<endl;
	cin>>a;
	cout<<"enter length for rectangle:"<<endl;
	cin>>l;
	cout<<"enter breath for rectangle:"<<endl;
	cin>>b;
	cout<<"enter breath for triangle:"<<endl;
	cin>>j;
	cout<<"enter height for triangle:"<<endl;
	cin>>h;
	area(r);
	area(a);
	area(l,b);
	area(h,j);
	return 0;
}