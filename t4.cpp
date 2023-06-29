#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	try
	{
		cout<<"enter the value a:";
		cin>>a;
		cout<<"enter yhe value b:";
		cin>>b;
		throw a;
	}
	catch(int a)
	{
		if(c==0)
		{
		cout<<"Ans ="<<a/b;
	    }
	    else
	    {
	    cout<<"not possible!!";
		}
	}
	return 0;
}