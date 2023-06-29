/*37.	Write a C++ program that reads the contents of text file and prints on console.*/
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
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
	cin.ignore();
	stream<<"Age is : "<<age<<endl;
	
	stream.close();
	
	ifstream infile;
	infile.open("afile.dat");
	cout<<"Reading from the file"<<endl;
	
	infile>>name;
	cout<<name<<endl;
	
	infile>>name;
	cout<<name<<endl;
	
	infile>>age;
	cout<<age<<endl;
	
	infile.close();
	return 0;
}
