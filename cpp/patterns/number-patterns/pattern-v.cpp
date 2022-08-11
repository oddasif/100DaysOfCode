/*
  1
  2 3
  4 5 6
  7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int row = 1;
  int count = 1;

  while (row <= n) // control the no. of rows
  {
    int col = 1;
    while (col <= row) // print the numbers 1 to n pattern
    {
      cout << count << " ";
      count++;
      col++;
    }

    cout << endl;
    row++;
  }
}