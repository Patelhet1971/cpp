#include<iostream>
using namespace std;
int main()
{
	int n,j,i,k=1;
	
	cout<<"enter the number of the rows:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<k++;
			cout<<endl;
		}
		
	}
	return 0;
}