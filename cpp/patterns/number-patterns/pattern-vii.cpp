/*
  1
  21
  321
  4321
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int row = 1;
  while (row <= n) // controls the no. of rows
  {
    int col = row;
    while (col >= 1) // prints the pattern
    {
      cout << col << " ";
      col--;
    }

    // alternate method
    /*
    int col = 1;
    while (col <= row) {
      cout << row - col + 1;
      col--;
    }
    */

    cout << endl;
    row++;
  }
}