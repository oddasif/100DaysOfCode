/*
  1 2 3 4
  5 6 7 8
  9 10 11 12
  13 14 15 16
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1, count = 1;
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= n) // prints the pattern
    {
      cout << count << " ";
      count++;
      j++;
    }

    cout << endl;
    i++;
  }  
}