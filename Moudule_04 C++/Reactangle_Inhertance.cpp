//Write a C++ Program to find Area of Rectangle using inheritance.

#include<iostream>
using namespace std;

class A
{
	int l,b,area;
	
	public:
		void Rectangle()
		{
			cout<<"Enter The Lenth and Breant of Reactangle :";
			cin>>l>>b;
			area=l*b;
			cout<<"Area of Reactangle :"<<area;
			
			
		}
};
main()
{
	A obj;
	obj.Rectangle();
}
