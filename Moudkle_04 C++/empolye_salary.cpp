/*Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include<iostream>
using namespace std;
class empolye
{
	string name;
	int id,r;
	float salary;
	public:
		void set()
		{
			cout<<"Enter the empolye name :";
			cin>>name;
			cout<<"Enter the Empolye ID :";
			cin>>id;
			cout<<"Enter the Empolye salary :";
			cin>>salary;
			cout<<"Enter Rating (0-9) :";
			cin>>r;
			 if(r<=0 && r<=9)
			 {
			 	salary*=r;
			 }
			 
		}
		void show()
		{
			cout<<"\nempolye name :"<<name;
			cout<<"\nempolye id:"<<id;
			cout<<"\nempolye intial salary :"<<salary;
			cout<<"\nPerfomance rating :"<<r;
			cout<<"\nupdated salary "<<salary;
			
		}
};
main()
{
	empolye e;
	e.set();
	e.show();
}
