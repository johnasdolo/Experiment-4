#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int arrx, arr[100], a, b, c;
	
	cout << "Selection Sorting..." << endl;
	cout << "Enter the array size: ";
	cin >> arrx;
	cout << "Enter the " << arrx << " elements:" << endl;
	
	a=0;
	while (a<arrx)
	{
		cin >> arr[a];
		a++;
	}
	
	cout << "\n";
	cout << "Your data: ";
	
	for (a=0; a<arrx; a++)
	{
		cout << arr[a] << " ";
	}
	
	a=0;
	while (a<arrx)
	{
		b=a+1;
		while (b<arrx)
		{
			if (arr[a] > arr[b])
			{
				c=arr[a];
				arr[a]=arr[b];
				arr[b]=c;
			}
			b++;
		}
		a++;
	}
	cout << "\n";
	cout << "After using selection or bubble sort..." << endl;
	cout << "\n";
	cout << "Sorted data: ";
	
	for (a=0; a<arrx; a++)
	{
		cout << arr[a] << " ";
	}
	
	_getch();
	return 0;
	
}
