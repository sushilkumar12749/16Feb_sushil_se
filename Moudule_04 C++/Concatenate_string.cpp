//Write a program to concatenate the two strings using Operator Overloading.

#include<iostream>
using namespace std;
class string
{
	char *s;
	int l;
	public:
		void getdata()
		{
			chat str[20];
			cout<<"Enter a string :";
			cin>>str;
			l=strlen(str);
			s=new char[1+1];
			strcpy(s,str);
		}
		
		void dispaly()
		{
			cout<<s<<endl;
		}
		string operator+(string x)
		{
			string temp;
			temp.s= new char[l+x. l+1];
			strcpy(temp.s,s);
			strcat(temp.s,x,s);
			return temp;
		}
};
main()
{
	string s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1+s2;
	cout<<"s3=";
	s3.dispaly();
}
