// for some reason not working in my system, works fine on online compiler 
// logic is also fine, eg for numbers like 22

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    int i = 0;
    long long int ans = 0;

    int flag = 0;
    if (n < 0) // negative number
    {
        n = n * -1;
        flag = 1;
    }

    // decimal to binary
    while (n != 0) 
    {
        int rem = n % 2; // can use n & 1 also
        ans = (rem * pow(10, i)) + ans;
        n = n / 2; // n >> 1
        i++;
    }

    if(flag)
        cout << "The binary form is: -" << ans;
    else
        cout << "The binary form is: " << ans;
    
    return 0;
}

// here we are using 10(pow)i becoz we are storing the binary value in an int
// and not an array so we have to develop a formula
// so as to append the binary bits in the integer variable 'ans'