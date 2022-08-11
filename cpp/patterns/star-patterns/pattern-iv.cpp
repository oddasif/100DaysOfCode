/*
  ****
  ***
  **
  *
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows

  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= (n + 1 - i)) // prints the pattern
    {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
}