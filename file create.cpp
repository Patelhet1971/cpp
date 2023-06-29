/*36.	Write a C++ program to create a text file and write into it.*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
	char name[100];
	int age;
	ofstream stream;
	cout<<"Writing to the file"<<endl;
	stream.open("het.txt");
	
	cout<<"Enter your name: ";
	cin.getline(name, 100);
	stream<<"Name is : "<<name<<endl;
	
	cout<<"Enter Your City : ";
	cin.getline(name,100);
	stream<<"City is : "<<name<<endl;
	
	cout<<"Enter Your Age : ";
	cin>>age;
	stream<<"Age is : "<<age<<endl;
	
	stream.close();
	return 0;
}