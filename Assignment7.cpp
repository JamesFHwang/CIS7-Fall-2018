// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void towerOfHanoi(int n, char Source, char Auxillary, char Destination);

int main()
{
	int n;

	cout << "Enter the amount of disks:";
	cin >> n;

	towerOfHanoi(n, 'A', 'B', 'C');

	

}

void towerOfHanoi(int n, char Source, char Auxillary, char Destination)
{
	if (n == 1)
	{
		cout << "Move Disk " << n << " from " << Source << " to " << Destination << endl;
		return;
	}

	towerOfHanoi(n - 1, Source, Destination, Auxillary);
	cout << "Move disk " << n << " from " << Auxillary << " to " << Destination << endl;
	towerOfHanoi(n - 1, Auxillary, Source, Destination);
}
