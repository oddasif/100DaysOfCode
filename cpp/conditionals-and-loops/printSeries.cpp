//Write a program to print first x terms of the series 3i + 2 which are not multiples of 4, where i = 1 to n
//Sample Input:
//10
//Sample Output:
//5 11 14 17 23 26 29 35 38 41

#include<iostream>
using namespace std;

int main() 
{
	int n, seriesTerm = 0, count = 0;
	cout << "Enter the range: ";
	cin >> n;
	
	if(n >= 1 && n <= 1000) 
	{
		for(int i=1; n!=count; i++) // n!=count because we have to print the given n terms, 
		//if i take i<=n it prints less term because of the condition that it should not be multiple of 4
		{
			seriesTerm = 3*i + 2;
			if(seriesTerm % 4 != 0) {
				cout << seriesTerm << " ";
				++count;
			}
		}
	}
	else 
		cout << "invalid input!!";
	
	return 0;
}