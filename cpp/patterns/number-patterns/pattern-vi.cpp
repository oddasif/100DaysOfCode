/*
  1
  23
  345
  4567
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int row = 1;
  while (row <= n) // controls the no. of rows
  {
    int val = row;
    int col = 1;
    while (col <= row) // prints the pattern
    {
      cout << val << " ";
      val++;
      col++;
    }

    // alternate method
    /*
    while (col <= row)
    {
      cout << row + col - 1 << " ";
      col++;
    }
    */

    cout << endl;
    row++;
  }
}