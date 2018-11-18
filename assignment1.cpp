#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string connectors = "!V^";
	string statements = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string input;

	bool again = true;
	char choice;


	while (again)
	{

		//Prompt the user for a string input
		cout << "Enter a String" << endl;

		bool lastWasAlpha = false;
		bool lastWasNot = false;
		bool lastWasConnector = false;
		bool isValidWff = true;

		//Go through every itteration of the string
		getline(cin, input);

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


		//Allow the user to enter a new string or quit
		cout << "Would you like to enter another string?" << endl;
		cin >> choice;
		cin.ignore();
		if (choice == 'N' || choice == 'n')
		{
			again = false;
		}
	}
	return 0;
}
