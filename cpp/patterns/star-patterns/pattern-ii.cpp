/*
  *
  **
  ***
  ****
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows

  int row = 1;
  while (row <= n) // control the no. of rows
  {
    int col = 1;
    while (col <= row) // prints the pattern
    {
      cout << "*";
      col++;
    }

    cout << endl;
    row++;
  }
}