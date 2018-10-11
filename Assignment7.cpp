#include<iostream>
using namespace std;

int main()
{
	cout << "Enter the amount of discs:";
	cin >> n;
	
	towerOfHonoi(n, 'A', 'B', 'C');

}

void towerOfHonoi(int n, char Source, char Auxillary, char Destination);
{
	if (n == 1)
	{
		cout << "Move Disc"
	}
}
