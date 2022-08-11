// determing whether the given number is odd or even by using while loop

#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isEven = false;
	cout << "Enter a number: ";
	cin >> num;

	// logic 1
	if(num%2 == 0)
		isEven = true;
	
	//logic 3
	// while(num > 0)
	// 	num = num - 2;
	// if(num == 0)
	//  	isEven = true;

	if(isEven)
		cout << "The number is even";
	else 
		cout << "The number is odd";

	return 0;
}