#include<iostream>
using namespace std;
int main()
{
    float p, t, r;

    cout << "Enter P, T(in years), R values: ";
    cin >> p >> t >> r;

    float simpleInterest = (p * t * r) / 100;
    cout << "Simple Interest = " << simpleInterest;

    return 0;
}