// given input n, return nth term of the AP = 3n+7

#include<iostream>
using namespace std;

int nthTerm(int n) 
{
    return (3 * n + 7);
}

int main()
{
    int n;
    cout << "Enter 'n' value to find the nth term of the AP: ";
    cin >> n;

    int term = nthTerm(n);

    cout << "nth term of the AP is: " << term;
    return 0;
}