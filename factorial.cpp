#include<iostream>
using namespace std;
int main()
{
	int number,fact=1,i;
	cout<<"Enter number of factorial:";
	cin>>number;
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of " << number << "is :"<<fact;
	return 0;
}