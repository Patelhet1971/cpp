#include<iostream>
using namespace std;

int sum(int a, int b);
int sum(int a, double b);
int sum(double a, double b);
int sum(double a, int b);

int sum(int a, int b)
{
	cout<<a+b;
	return 0;
}

int sum(int a, double b)
{
	cout<<a+b;
	return 0;
}

int sum(double a, double b)
{
	cout<<a+b;
	return 0;
}

int sum(double a, int b)
{
	cout<<a+b;
	return 0;
}

int main()
{
	int a,b;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	sum(a,b);
	
	cout<<endl;
	
	
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	sum(a,b);
	
	cout<<endl;
	
	sum(53,6);
	cout<<endl;
	
	sum(7,96);
	cout<<endl;
	return 0;
}