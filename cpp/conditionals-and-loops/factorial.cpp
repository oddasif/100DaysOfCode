// calculating the factorial of a given number
#include<iostream>
using namespace std;

int main()
{
	int n;
	long long int fact = 1;
	
	cout << "Enter any number: ";
	cin >> n;
	
	if(n>=0) {
		for(int i=1; i<=n; i++)
			fact = fact * i;
	cout << "\nFactorial of " << n << " is " << fact;
	}

	else {
		cout << "\nPlease enter a valid number!";
	}

	return 0;
}