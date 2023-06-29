#include <iostream>
using namespace std;
class abc
{
    public:
  		void display();
    	int a,b;
  		void get(int a,int b)
  		{
    		this->a=a;
     		this->b=b;
  		}
    abc operator+(abc &s2)
	{   
		abc temp;
    	temp.a=a+s2.a;
    	temp.b=b+s2.b;
    	return temp;
	}
};
void abc::display()
{
    cout<<"\nvalues are \n"<<a<<" "<<b;
}
int main() 
{
	abc s1,s2,s3;
	s1.get(5,10);
	s1.display();
	s2.get(15,20);
	s2.display();
	s3=s1+s2;
	s3.display();
}
