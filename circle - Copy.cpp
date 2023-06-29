#include<iostream>
using namespace std;
int area(float radius)
{
	float a=3.14*radius*radius;
	cout<<a;
	return 0;
}
int main()
{
	float radius;
	
	cout<<"enter the radius of circle:";
	cin>>radius;
	
	area(radius);
}