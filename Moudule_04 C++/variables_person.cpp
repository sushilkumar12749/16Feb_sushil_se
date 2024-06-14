/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables*/

#include<iostream>
using namespace std;
class person
{
	int age;
	string name,country;
	public:
	void set()
	{
		cout<<"Enter Person Name :";
		cin>>name>>country;
		
		/*cout<<"Enter Person's country Name :";
		cin>>Country;*/
	
		cout<<"Enter Person's age :";
		cin>>age;
	
		
	
	}
	
	void get:: void set()
	{
		cout<<"/nperson name :"<<name;
		cout<<"/nperson age :"<<age;
		cout<<"/nPerson Country :"<<country;
	}
};
main()
{
	person p;
	p.get();
	p.set();
}
