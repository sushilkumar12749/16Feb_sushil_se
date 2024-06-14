/*Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include<iostream>
using namespace std;
main()
{
	int c,p,ch,m,e,total;
	float per;
	double avg;
	cout<<"Enter the student mark's of compture :";
	cin>>c;
	cout<<"Enter the students mark's of Physics :";
	cin>>p;
	cout<<"Entre the studets mark's of chemistry :";
	cin>>ch;
	cout<<"Enter the students marks's of English :";
	cin>>e;
	total=c+p+ch+m+e;
	cout<<"\nTotal Marks +"<<total;
	avg=total/5;
	per=(total*100)/500;
}
