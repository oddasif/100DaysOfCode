/*
  1111
  2222
  3333
  4444
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1;
  while (i <= n) // controls the no. of rows
  {
    int j = 1;
    while (j <= n) // prints the pattern
    {
      cout << i;
      j++;
    }

    cout << endl;
    i++;
  }
}