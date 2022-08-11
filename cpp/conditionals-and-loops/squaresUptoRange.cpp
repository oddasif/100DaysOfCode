// printing the square of numbers from 1 to given number 'n'

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number(range): ";
	cin >> n;
	
	for(int i=1; i<=n; i++)
		cout << "\nSquare of " << i << " is " << i * i;
	
	return 0;
}