/*
  ABCD
  ABCD
  ABCD
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4;

  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= n) // prints the pattern
    {
      char ch = 'A' + j - 1;
      cout << ch;
      j++;
    }
    
    cout << endl;
    i++;
  }
}