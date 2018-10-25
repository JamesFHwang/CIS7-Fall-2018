#include "stdafx.h"
#include <iostream>

using namespace std;


void towerOfHanoi(int n, char Source, char Auxillary, char Destination);
int factorial(int n);


int main()
{
	int n;

	cout << "Enter the amount of disks:";
	cin >> n;

	cout << "The factorial of " << n << " disks is " << factorial(n) << endl;
	system("pause");
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

int factorial(int n)
{
	if (n > 1)
	{
		return n * factorial(n - 1);
	}
	else
	{
		return 1;
	}
}
