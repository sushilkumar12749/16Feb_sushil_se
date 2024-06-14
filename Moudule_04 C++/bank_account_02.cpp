/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
#include<iostream>
using namespace std;
class BankAccount
{
	string acno;
	float balance;
	public:BankAccount()
	{
		balance=1000;
		
	}
	void deposite()
	{
		float a;
		cout<<"Enter The Amount :";
		cin>>a;
		balance+=a;
		cout<<"Deposite successfully ";
		
	}
	void withdraw()
	{
		float a;
		cout<<"Enter Amount";
		cin>>a;
		if(a>balance)
		{
			balance-=a;
			cout<<"successfully withdraw :";
		}
		else
		{
			cout<<"Sorry Main Balance is Low :";
		}
	}
		
};
main()
{
	
	int ch;
	do
	{
	
	cout<<"\n1.Check Balnace :";
	cout<<"\n2.Deposite amount :";
	cout<<"\n3.Withdraw Amount :";
	cout<<"\nEnter Your Choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		a.show();
		break;
		
		case 2:
		a.deposite();
		break;
		
		case 3:
		a.withdraw();
		break;
		
		default :
			cout<<"\nPlease Enter Right answer ";
	}	while(ch!=4)
	
	}
	
}
