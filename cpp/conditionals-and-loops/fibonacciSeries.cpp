// program to print fibonacci series upto a given number
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the range to print fibonacci series: ";
    cin >> n;
    
    if(n <= 0) {
       	cout << "Invalid Input";
        exit(0);
    }
	
    int a = 0, b = 1; // first 2 terms of the series

	if(n == 1)
		cout << a;
	
	else if(n == 2 || n > 2)
    	cout << a << "\t" << b;
	
    for(int i=1; i <= n-2; i++)
    {
        int c = a + b;
        cout << "\t" << c;
        a = b;
        b = c;
    }

    return 0;
}