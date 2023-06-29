#include<iostream>
using namespace std;
int area(float r);
int cir(float r);
int main()
{
	float r;
	cout<<"Enter radius to find the circumference and area: ";
	cin>>r;
	
	cir(r);
	area(r);
}
int cir(float r)
{
	float c;
	c=2*3.14*r;
	cout<<"\nCircumference of circle: "<<c;
	return 0;
}
int area(float r)
{
	float a;
	a=3.14*r*r;
	cout<<"\nArea of circle: "<<a;
	return 0;
}