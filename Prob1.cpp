#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

	void addition ()
	{
		int x, y;
		float sum;
		cout << "Input first integer: ";
		cin >> x;
		cout << "Input second integer: ";
		cin >> y;
		sum = x + y;
		cout << "The sum is: " << sum;
		
		return;
	}
	
	void subtraction ()
	{
		int x, y;
		float difference;
		cout << "Input first integer: ";
		cin >> x;
		cout << "Input second integer: ";
		cin >> y;
		difference = x-y;
		cout << "The difference is: " << difference;
		return;
	}
	
	void product ()
	{
		int x, y;
		float product;
		cout << "Input first integer: ";
		cin >> x;
		cout << "Input second integer: ";
		cin >> y;
		product = x*y;
		cout << "The product is: " << product;
		return;
	}
	
	void quotient ()
	{
		int x, y;
		float quotient;
		cout << "Input first integer: ";
		cin >> x;
		cout << "Input second integer: ";
		cin >> y;
		quotient = x/y;
		cout << "The quotient is: " << quotient;
		return;
	}
	
	void modu ()
	{
		int x, y;
		float modulus;
		cout << "Input first integer: ";
		cin >> x;
		cout << "Input second integer: ";
		cin >> y;
		modulus = x%y;
		cout << "The remainder is: " << modulus;
		return;
	}


int main()
{
	int operation;
	float quo, mod, prod;
	char cont;
	
		cout << "  1. Add" << endl;
		cout << "  2. Subtract" << endl;
		cout << "  3. Multiply" << endl;
		cout << "  4. Divide" << endl;
		cout << "  5. Modulus" << endl;
	
	do
	{
		cout << "Choose from the operation choice (1-5): ";
		cin >> operation;
	
			
			switch (operation)
			{
				case 1:
					addition ();
				break;
		
				case 2:
					subtraction ();
				break;
		
				case 3:
					product ();
				break;
		
				case 4:
					quotient ();
				break;
		
				case 5:
					modu ();
				break;
		
				default:
				cout << "Wrong operator!";
			}
		
		cout << "\n\nPress 'Y' to choose from the operation choice: ";
		cin >> cont;
		
		cout <<"\n";
		
	} while(cont =='y' || cont =='Y');
	cout << "Good Job!";
	
	_getch();
	return 0;
	
}
