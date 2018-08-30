/*

Part 1: Write a program in C++ that will parse a string and indicate whether or not it is a WFF (10 pts)

Prompt the user for a string input
Parse the string and indicate whether or not the string is a WFF
Allow the user to enter a new string or quit
Only the following input is allowed: ^, V, !, A-Z (capital letters only)
Part 2: If, Then support (10 pts)

Add support for the "->" connector

*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string connectors = "!V^";
	string input;

	//Prompt the user for a string input
	cout << "Enter a String" << endl;

	//Go through every itteration of the string
	getline(cin, input);

	bool lastWasAlpha = false;
	bool lastWasNot = false;
	bool lastWasConnector = false;
	bool isValidWff = true;


	for (unsigned int i = 0; i < input.length(); i++)
	{

		//Check Space
		char c = input[i];
		if (c == ' ')
		{
			continue;
		}

		//Check Connector
		if (c == '!' || c == 'V' || c == 'v' || c == '^')
		{
			//found connector
			if (c != '!')
			{
				if (!lastWasAlpha)
				{
					isValidWff = false;
					break;
				}
				lastWasConnector = true;
				continue;
			}
			else
			{
				if (lastWasAlpha)
				{
					isValidWff = false;
					break;
				}
				lastWasNot = true;
				continue;
			}
			lastWasAlpha = false;
		}

		//Check A-Z
		else if (isalpha(c))
		{
			cout << "you found an alpha" << endl;
			//found statment
			if (lastWasAlpha)
			{
				isValidWff = false;
				break;
			}
			lastWasAlpha = true;
			continue;
		}
		else
		{
			isValidWff = false;
			break;
		}

	}
	cout << (isValidWff ? "That is a WFF" : "Not a Valid WFF") << endl;

		//Check Duplicates

	//Allow the user to enter a new string or quit
	cout << "Would you like to enter another string?" << endl;
    return 0;
}

