// printing the table of a given number

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter any number: ";
	cin >> n;

	if(n <= 0) {
		cout << "\n Enter a valid number!!!";
		exit(0);
	}

	for(int i=1; i<=10; i++)	
		cout << "\n " << n << " x " << i << " = " << n*i;

	return 0;
}