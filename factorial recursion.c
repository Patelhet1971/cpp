#include<stdio.h>
#include<conio.h>
void main()

{
	int n,f;
	printf("enter no. for finding functional :");
	scanf("%d",&n);
	f=fact(n);
	printf("fuctional is %d",f);
}
int fact(int n)
{
	if(n==0)
	return(1);
	else
	return(n*fact(n-1));
}
