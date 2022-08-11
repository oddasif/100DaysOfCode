/*
  12344321
  123**321
  12****21
  1******1
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= (n - i + 1)) // prints the 1st number pattern
    {
      cout << j;
      j++;
    }

    int k = 2 * (i - 1);
    while (k) // prints the star pattern
    {
      cout << "*";
      k--;
    }
    
    int l = n - i + 1;
    while (l) // prints the 2nd number pattern
    {
      cout << l;
      l--;
    }

    cout << endl;
    i++;
  }
}