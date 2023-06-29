#include<iostream>
using namespace std;
int addition(int x=10,int y=20, int z=30,int w=40)
{
	return(x+y+z+w);
}
int multiply(int x=10,int y=20,int z=30)
{
	return(x*y*z);
}
int display(int b=51)
{
	for(int i=0;i<5;i++)
	{
		cout<<b<<" ";
		b++;
	}
}
int main()
{
	cout<<"No argument passed:"<<addition()<<endl;
	cout<<"two argument passed:"<<addition(10,20)<<endl;
	cout<<"three argument passed:"<<addition(10,20,30)<<endl;
	cout<<"No argument passed:"<<multiply()<<endl;
	cout<<"two argument passed:"<<multiply(10,20)<<endl;
	display();
	return 0;
}