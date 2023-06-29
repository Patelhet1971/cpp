#include<iostream>
using namespace std;
int main()
{
	int number,remainder;
	cout<<"please enter and integer number:";
	cin>>number;
	remainder=number % 2;
	if(remainder ==0)
	{
		cout<< number << "is an even number";
	}
	else
	{
		cout<< number << "is an odd number";
	}
	return 0;
}