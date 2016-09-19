#include <iostream>
#include <string>
using namespace std;

//Program: MailingLabel
//Author: Tyler Timmins
//Course: ITSE 1307 2002
//Description: Prompts the user to enter a mailing address and 
//				name then outputs it to the user in a format.

int main()
{
	//declare variables
	string sFirstName;
	string sLastName;
	string sAddress;
	string sCity;
	string sState;
	string sZipCode;

	//get input using GetLine
	cout << "Enter First Name: ";
	getline(cin, sFirstName);
	
	cout << "Enter Last Name: ";
	getline(cin, sLastName);
	
	cout << "Enter Address: ";
	getline(cin, sAddress);
	
	cout << "Enter City: ";
	getline(cin, sCity);
	
	cout << "Enter State: ";
	getline(cin, sState);
	
	cout << "Enter Zip Code: ";
	getline(cin, sZipCode);

	cout << endl;

	//display output
	cout << sFirstName << " " << sLastName << endl;
	cout << sAddress << endl;
	cout << sCity << ", " << sState << " " << sZipCode << endl; 


	return 0;
}