#include <iostream>
#include <math.h>
using namespace std; 
class Calculator
{
float a, b;
public:

	void result() 
	{
		cout << "Enter First Number: "; 
		cin >> a;
		cout << "Enter Second Number: "; 
		cin >> b;
	}

	float add() 
	{
		return a + b;
	}

	float sub() 
	{
		return a - b;
	}

	float mul() 
	{
		return a * b;
	}

	// Function to divide two numbers
	float div() 
	{
		if (b == 0) 
		{
			cout << "Division By Zero";
			return INFINITY;
		}
		else
		{
			return a / b;
		}
	}
};

int main() 
{
	int ch;
	Calculator c; 
	cout << "Enter 1 to Add 2 Numbers" << 
			"\nEnter 2 to Subtract 2 Numbers" << 
			"\nEnter 3 to Multiply 2 Numbers" << 
			"\nEnter 4 to Divide 2 Numbers" << 
			"\nEnter 0 To Exit";
		
	do
	{
		cout << "\nEnter Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			
			c.result();	 
			
			cout << "Result: " << 
					c.add(); 
			break;
		case 2:
			c.result();
			cout << "Result: " <<c.sub();
				 
			break;
		case 3:
			c.result();
			cout << "Result: " <<c.mul(); 
					 
			break;
		case 4:
			c.result();
			cout << "Result: " <<c.div(); 		 
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
}

