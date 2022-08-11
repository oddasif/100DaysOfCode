//addition of two numbers using a function

#include<iostream>
using namespace std;

int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1, n2, sum;

    cout << "Enters any two numbers: " << endl;
    cin >> n1 >> n2;

    sum = addNumbers(n1, n2);        // function call
    cout << "sum of " << n1 << " and " << n2 << " is " << sum;

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    return a+b;                  // return statement
}
