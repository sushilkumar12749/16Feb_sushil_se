#include<iostream>
using namespace std;

void showmenu()
{
	cout<<"------Menu--------" <<endl;
	cout<<" 1. Cheack Blance "<<endl;
	cout<<" 2. Deposite" <<endl;
	cout<<" 3. WithDraw Amount"<<endl;
	cout<<" 4. Exit"<<endl;
	cout<<"----------------------"<<endl;
	
}

int main()
{
	// cheack blance, Deposite, withdraw, showmenu
	
	int option;
	double blance = 500;
	
	do{
		showmenu();
	cout<<"option :";
	cin>>option;
	system ("cls");
	
	switch (option)
	{
		case 1 : cout<<"Blance Is :" <<blance  <<endl;
		case 2 : cout<<"Depodite amount :";
				double depositeamount;
				cin>>  depositeamount;
				blance += depositeamount;
				break;
		
		
		case 3 : cout<<"WithDraw amount :";
				double WithDrawamount;
				cin>>  WithDrawamount;
				if (WithDrawamount <= blance)
				blance -= WithDrawamount;
				
				else
				
					cout<<"Not Enough Money :"<<endl;
				
				break;		
				
	}
	}while (option!=4);
	
	
	system("pause>0");
	
	
	
	
}
