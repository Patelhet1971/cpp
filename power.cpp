/*write a c++ program to make a function called power() that takes a double value for m and
an integer value
for p use a default argument of 2 for p so that if argument is omitted the number will be
square write a
main function thats get value from user to test this function*/

#include<iostream>
using namespace std;
double power(double m,int p=2)
{
int i,a=1;
for(i=1;i<=p;i++)
{
a*=m;
}
return a;
}
int main()
{
char k;
double m;
int p;
cout<<"enter value of m:";
cin>>m;
cout<<"enter your choose yes/no:";
cin>>k;
if(k=='y')
{
cout<<"enter value of p:";
cin>>p;
cout<<power(m,p);
}
else
cout<<power(m);
}