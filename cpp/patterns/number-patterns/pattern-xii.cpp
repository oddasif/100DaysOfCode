/*
     1
    23
   456
  78910
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1, val = 1;
  while (i <= n) // control the no. of rows
  {
    int space = n - i;
    while (space) // controls the spaces
    {
      cout << " ";
      space--;
    }

    int j = 1;
    while (j <= i) // prints the pattern
    {
      cout << val;
      val++;
      j++;
    }

    cout << endl;
    i++;
  }
}