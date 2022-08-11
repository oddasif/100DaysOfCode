// swapping of two numbers with a third variable
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter any two numbers: ";
	cin >> a >> b;
	cout << "\nYou Entered: a = " << a << " and b = " << b;

	c=a;
	a=b;
    b=c;

	// //without using a third variable
	// a=a-b;
	// b=b+a;
    // a=b-a;

	cout << "\nNumbers after swapping: a = " << a << " and b = " << b;
	return 0;
}