/*Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include<iostream>
using namespace std;
class student
{
	private:
		int rno;
		string name;
		int mark;
		
		public:
			void get()
			{
				cout<<"Enter Your Name,rno,mark :";
				cin>>name>>rno>>mark;
				
			}
			void display()
			{
					cout<<"\nYour Name is :"<<name;
					cout<<"\nYour rno is :"<<rno;
					cout<<"\nYour Mark is :"<<mark;
			}
};
main()
{
	student s1,s2;
	s1.get();
	s2.get();
	s1.display();
	s2.display();
	
}
