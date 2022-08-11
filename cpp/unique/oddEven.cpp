// determining whether the given number is even or odd
#include<iostream>
using namespace std;
int main()
{
	int n, a;
	cout << "Enter the number: ";
	cin >> n;
	a = n;

	while((n-a) != a && a != 0)
		a--;

	if((a+a) == n)
		cout << n << " is Even Number";
	else 
		cout << n << " is Odd Number";
	
	return 0;
}

// for even numbers the loop will run only till 'a' becomes half of the number 
// then left side condition becomes false & loop will terminate leaving 'a' = half of its value
// so a+a becomes n and its a even number

// but for odd numbers the loop will execute till 'a' becomes zero, which will not satisfy the if condition