#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	int var1 = 0;
	int var2 = 0;

	bool control = false;

	Calculator C;

	while (control != true)
	{

		cout << "Welcome to the Main Menu" << endl;
		cout << "------------------------" << endl;
		cout << "Choice 1: Enter + to Add" << endl;

		string choice;

		cin >> choice;

		if (choice == "+")
		{
			int var3 = 0;
			cout << "Enter two numbers to add" << endl;

			cin >> var1;
			cout << "You Entered: " << var1 << endl;
			cin >> var2;
			cout << "You Entered: " << var1 << endl;
			var3 = C.Addition(var1, var2);
			cout << "Your answer is: " << var3 << endl;

		}

	}

	


	
	return 0;
}