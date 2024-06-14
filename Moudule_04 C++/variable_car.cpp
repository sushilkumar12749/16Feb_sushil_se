#include<iostream>
using namespace std;
class car
{
	string company,model;
	int year;
	public:
		void get()
		{
			cout<<"Enter Company Name :";
			getline(cin,company);
			cout<<"Enter the Model Name :";
			getline(cin,model);
			cout<<"Enter the Year :";
			cin>>year;	
		}
		void set()
		{
			cout<<"\nCompany name :"<<company;
			cout<<"\nnmodel name :"<<model;
			cout<<"\nyear	:"<<year;
			
		}
};
main()
{
	car c;
	c.get();
	c.set();
}

