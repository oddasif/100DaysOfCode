/*
  1
  22
  333
  4444
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int row = 1;
  while (row <= n) // control the no. of rows
  {
    int col = 1;
    while (col <= row) // prints the number
    {
      cout << row;
      col++;
    }

    cout << endl;
    row++;
  }
}