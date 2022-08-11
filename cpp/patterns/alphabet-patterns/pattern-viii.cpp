/*
  D
  CD
  BCD
  ABCD
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    char ch = 'A' + (n - i);
    while (j <= i) // prints the pattern
    {
      cout << ch;
      ch++;
      j++;
    }

    cout << endl;
    i++;
  }
}