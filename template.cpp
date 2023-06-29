#include<iostream>
using namespace std;
template <class T> sub(T &a,T &b)
{
	T result =a-b;
	return result;
}
int main()
{
	int i=2;
	int j=3;
	float m=2.3;
	float n=1.2;
	cout<<"subsraction of i and j is:"<<sub(i,j);
	cout<<"subsraction of m and n is:"<<sub(m,n);
	return 0;
}