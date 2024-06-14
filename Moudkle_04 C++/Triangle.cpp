/*Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;
main()
{
	int side1,side2,side3;
	cout<<"Enter ur side :";
	cin>>side1>>side2>>side3;
	if(side1==side2==side3)
	{
		cout<<"Epui Triangle :";
		
	}
	else if(side1==side2 || side2==side3)
	{
		cout<<"is called Triangle :";
		
	}
	else
	{
		cout<<"scale Triangle";
	}
	
}
