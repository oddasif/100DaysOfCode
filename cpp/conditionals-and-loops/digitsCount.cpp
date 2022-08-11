// counting the number of digits in a number

#include<iostream>
using namespace std;
int main()
{
	long long int n;
	int digitCount=0;
	
	cout << "Enter any number: ";
	cin >> n;
	
	while(n)
	{
		digitCount++;
		n /= 10;	
	}
	cout << "\nThe number of digits are: " << digitCount;
	
	return 0;
}
