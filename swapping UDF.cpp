#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter number for A:";
	cin>>a;
	cout<<"Enter number for B:";
	cin>>b;
	
	cout<<"Before swap value"<<endl;
	cout<<"value of a is"<<a<<endl;
	cout<<"value of b is"<<b<<endl;
	
	a=a-b;
	b=b+a;
	a=b-a;
	
	cout<<"After swap value"<<endl;
	cout<<"value of a is"<<a<<endl;
	cout<<"value of b is"<<b<<endl;
	
	return 0;
}