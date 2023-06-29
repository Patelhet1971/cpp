#include<iostream>
using namespace std;
class abcd;
class abc
{
	public:
		void display()
		{
			cout<<"Patel HetKumar."<<endl;
		}
		friend void het(abcd);
};
class abcd
{
	public:
		void display()
		{
			cout<<"power of patel"<<endl;
		}
		friend void het(abcd);
};
void het(abcd b)
{
	int a=10;
	if(a%2==0){
		cout<<"This number "<<a<<" is even."<<endl;
	}
	else{
		cout<<"This number "<<a<<" is odd."<<endl;
	}
};
int main()
{
	abc a;
	abcd b;
	a.display();
	b.display();
	het(b);
	return 0;
}