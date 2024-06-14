/*Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/

#include<iostream>

using namespace std;
class called
{
		int flag=0;
		int day,month,year;
		public:
		void set()
		{
			
			cout<<"Enter day :";
			cin>>day;
			cout<<"Enter Month :";
			cin>>month;
			cout<<"Enter Year :";
			cin>>year;
			
		}
		void get()
		{
			cout<<day<<"\n"<<month<<"\n"<<year;
			if(day<1 || day>31)
			{
				cout<<"invalide date :";
				flag++;
				
			}
			if(month<1 || month>12)
			{
				cout<<"invalide Month :";
				flag++;
				
			}
			if((month==4 || month==6 || month==9 || month==11)&&day>31)
			{
				cout<<"invalide date :";
				flag++;
			}
			if(month==2)
			{
				if((year % 4==0 && year % 100 ==0)||(year%400==0))
				
				if(day>29) 
				{
					cout<<"\nInvalid Date ";
					flag++;
					
			}}
			else if(day>28)
			{
				cout<<"Invalid Date ";
				flag++;
			}
			if(flag==0)
			{
			cout<<"\ndate is Valid ";
			
			}
		}
};
main()
{
	called c;
	c.get();
	c.set();
}
