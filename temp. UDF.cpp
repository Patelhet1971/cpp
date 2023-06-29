#include<iostream>
using namespace std;
int fah()
{
	float a,c;
	cout<<"enter temperture :"<<endl;
	cin>>a;
	c=(a*9/5)+32;
	cout<<c; 	
}
int cal()
{
	float b,c;
	cout<<"enter temperture:"<<endl;
	cin>>b;
	c=(b-32)*5/9;            
	cout<<c;
}
int main()
{
	int ch;
	float a,b,c;
	cout<<"enter 1 to convert to fehrenheit:"<<endl;
	cout<<"enter 2 to convert to celsius:"<<endl;
	cout<<"enter your choice:"<<endl;              
	cin>>ch;                          
	switch(ch)
	{
		case 1:
		{
			fah();
			break;
		}
		case 2:
			{
				cal();
				break;
			}
			default:cout<<"enter right value!!!";
	}
	return 0;
} 