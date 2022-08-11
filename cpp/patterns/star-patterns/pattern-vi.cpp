//pattern
//n=5
//  *
// ***
//*****
// ***
//  *

#include<iostream>
using namespace std;

int main() 
{
	int n = 5, i, j, k;
		
	for(i=1; i <= (n+1)/2; i++) // prints upper pattern from row 1 to 3
	{
		for(j=1; j <= (n+1)/2-i; j++) // for printing spaces
		{
			cout << " ";
		}
		
		for(k=1; k < 2*i; k++) // for printing stars
		{
			cout << "*";
		}
		
		cout << endl;
	}

	for(i=1; i <= n/2; i++) // prints lower pattern from row 4 to 5
	{
		for(j=1; j <= i; j++) 
		{
			cout << " ";
		}

		for(k=1; k < ((n+1)/2-i)*2; k++) 
		{
			cout << "*";
		}

		cout << endl;
	}
	return 0;
}