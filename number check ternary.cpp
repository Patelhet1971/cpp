#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
	
	(num<=0)?
	((num==0)?
	cout<< num << " is zero":
	cout<< num << " is negative"):
	cout<< num << " is positive";
	return 0;
}