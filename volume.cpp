#include<iostream>
using namespace std;
#define pie 3.14

volume(int a)
{
	cout<<"volume of cube:"<<a*a*a<<endl;
	return 0;
}
volume(float l,float b,float h)
{
	cout<<"vplume of cuboid:"<<l*b*h<<endl;
	return 0;
}
volume(double r)
{
	cout<<"volume of sphere:"<<1.33*pie*r*r*r<<endl;
	return 0;
}
volume(long k,long j)
{
	cout<<"volume of sphere:"<<k*k*j<<endl;
	return 0;
}
int main()
{
	int a;
	float l,b,h;
	double r;
	long j,k;
	
	cout<<"enter redius for sphere:"<<endl;
	cin>>r;
	cout<<"enter side for cube:"<<endl;
	cin>>a;
	cout<<"enter length for cuboid:"<<endl;
	cin>>l;
	cout<<"enter breath for cuboid:"<<endl;
	cin>>b;
	cout<<"enter height for cuboid:"<<endl;
	cin>>h;
	cout<<"enter height for cylinder:"<<endl;
	cin>>j;
	cout<<"enter redius for cylinder:"<<endl;
	cin>>k;
	volume(a);
	volume(l,b,h);
	volume(r);
	volume(k,j);
	return 0;
}