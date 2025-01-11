// mooreLab9Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*
		*Copyright(c) Jason Moore, 2024
		* This software is licensed under the MIT License.
		* See LICENSE file for details.
	*/

	cout << "********************************" << endl;
	cout << "*         Jason Moore          *" << endl;
	cout << "*      String Manipulation     *" << endl;
	cout << "*            Lab-9             *" << endl;
	cout << "********************************\n" << endl;

	// Declare/Initialize Variables
	string firstName = { " " };
	string lastName = { " " };
	string phoneNumber = { " " };
	string socialSecurityNumber = { " " };

	// User Input
	cout << "Please enter your first name: ";
	cin >> firstName;

	cout << "Please enter your last name: ";
	cin >> lastName;

	// Do while loop to force user to enter 10 characters for the phone number
	do
	{
		// User Input
		cout << "Please enter your phone number (Do not enter any dashes/parenthesis): ";
		cin >> phoneNumber;

		if (phoneNumber.length() == 10)
		{
			phoneNumber.insert(0, "("); // Insert parenthesis and dash for phone number
			phoneNumber.insert(4, ")");
			phoneNumber.insert(8, "-");
		}

		else if (phoneNumber.length() < 10)
		{
			cout << "\nPlease enter 10 characters for the phone number." << endl; // Data Validation Condition - Asking user to enter at least 10 characters to proceed.
		}

	} while (phoneNumber.length() < 10);

	// Do while look to force user to input 9 characters for the SSN
	do
	{
		// User Input
		cout << "Please enter your SSN (Do not enter any dashes/parenthesis): ";
		cin >> socialSecurityNumber;

		if (socialSecurityNumber.length() == 9)
		{
			socialSecurityNumber.insert(3, "-"); // Insert dashes for social security number
			socialSecurityNumber.insert(6, "-");
		}

		else if (socialSecurityNumber.length() < 9)
		{
			cout << "\nPlease enter 9 characters for the social security number." << endl; // Data Validation Condition - Asking user to enter at least 9 characters to proceed.
		}

	} while (socialSecurityNumber.length() < 9);

	// Manipulated String Output
	cout << "\n***** Your Personal Information *****";
	cout << "\n\nFull Name: " << firstName + " " + lastName << endl;
	cout << "Reversed Full Name: " << lastName + ", " + firstName << endl;
	cout << "Phone Number: " << phoneNumber << endl;
	cout << "Social Security Number: " << socialSecurityNumber << endl;
	cout << "\n\n\nTHANK YOU FOR USING THE STRING MANIPULATION PROGRAM.\n" << endl;

	system("pause");
	return 0;
} // End of main function
