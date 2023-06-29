#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"for voting \n";
	try
	{
		if(age>18)
		{
			cout<<"you are adult";
		}
		else if(age==0)
		{
			throw age;
		}
		else
		{
			throw(1.5f);
		}
	}
	    catch(int a)
		{
			cout<<"you are not adult";
		}
}