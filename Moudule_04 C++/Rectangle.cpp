/*Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

main()
{
	int l,b,area;
	
	cout<<"Enter the value of lenth :";
	cin>>l;
	
	cout<<"Enter the value of bradth :";
	cin>>b;
	
	area=l*b;
	
	cout<<"the area of reactangle ="<<area;
	
}
