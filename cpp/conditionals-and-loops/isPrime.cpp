#include<iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a number to check whether it's prime or not: ";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        cout << i <<endl;
        if(n%i == 0) {
            ++count;
        }
    }

    if(count == 1)
        cout << "Number is Prime";
    else
        cout << "Number is Not Prime";

    return 0;
}