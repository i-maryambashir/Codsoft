#include <iostream>
using namespace std;
int addition (int x, int y)
{
	return x+y;
}
int subtraction (int x, int y)
{
	return x-y;
}
int multiplication (int x, int y)
{
	return x*y;
}
int division (int x, int y)
{
	return x/y;
}
int main()
{
	int a, b, c;
	cout << "First number: ";
	cin >> a;
	cout << "Second number: ";
	cin >> b;
	cout << "1. Addition" << endl 
	<< "2. Subtraction" << endl
	<< "3. Multiplication" << endl
	<< "4. Division" << endl;
	cout << "Enter your choice: ";
	cin >> c; 
	switch (c)
	{
	
		case 1:
			cout << "Result: " << addition (a,b);
			break;
		case 2:
			cout << "Result: " << subtraction (a,b);
			break;
		case 3:
			cout << "Result: " << multiplication (a,b);
			break;
		case 4:
			cout << "Result: " << division (a,b);
			break;
	}
return 0;
}
