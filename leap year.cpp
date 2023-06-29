#include<iostream>
using namespace std;
int main()
{
   //variable declaration/
   int year;
   //taking user input/
   cout<<"Enter any year\n";
   cin>>year;
   /* using leap condition*/
if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Common year";
    }
}
