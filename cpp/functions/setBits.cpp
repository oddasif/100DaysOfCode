// given two input numbers a and b, return the sum of set bits(1) in both a & b

#include<iostream>
using namespace std;

int setBits(int n) 
{
    int count = 0;
    while(n)
    {
        if(n & 1) // counts the set bits
            ++count;
        
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    int totalSetBits = setBits(a) + setBits(b);

    cout << "The total number of set bits in a and b are: " << totalSetBits;

    return 0;
}