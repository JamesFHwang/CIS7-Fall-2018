#include<iostream>
#include <algorithm> 
#include <chrono> 
using namespace std;
using namespace std::chrono;

int GCD(int a, int b);

int main()
{
	int a;
	int b;
	int greatestCommonDivisor;
	int swap;
	char answer = 'Y';


	cout << "This program will find the GCD of your numbers" << endl;

	while (answer == 'Y' || answer == 'y')
	{
		cout << "Please enter a number" << endl;
		cin >> a;
		cout << "Please enter a second number" << endl;
		cin >> b;

		if ( a > 0 && b > 0)
		{
			if (a < b)
			{
				swap = b;
				a = b;
				a = swap;
			}
			
			auto start = high_resolution_clock::now();
			greatestCommonDivisor = GCD(a, b);
			auto stop = high_resolution_clock::now();
			auto duration = duration_cast<nanoseconds>(stop - start);


			cout << "The GCD of these two numbers is " << greatestCommonDivisor << "." << endl;
			cout << "Time Taken:" << duration.count() << " nanoseconds." << endl;

			cout << "Would you like to try a different number?(Y/N)" << endl;

			cin >> answer;

			if (answer == 'N' || answer == 'n')
			{
				break;
			}
		}
		else
		{
			cout << "Those are not positive integers." << endl;
			cout << "Please Try Again." << endl;
			cout << endl;
		}
	
	}
	return 0;
}


int GCD( int m, int n )
{
	int r;
	do
	{
		r = m % n;
		if (r == 0)
			break;
		m = n;
		n = r;
	} while (true);

	return n;
}
