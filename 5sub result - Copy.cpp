#include<iostream>
using namespace std;
int main()
{
	float p,c,m,g,e,avg;
	cout << "enter mark in physics:\n";
	cin>>p;
	cout << "enter mark in maths:\n";
	cin>>m;
	cout << "enter mark in chemistry:\n";
	cin>>c;
	cout << "enter mark in gujrati:\n";
	cin>>g;
	cout << "enter mark in english:\n";
	cin>>e;
	avg=(p+c+m+g+e)/5;
	cout<<"Average of result="<<avg;
	return 0;
	
}