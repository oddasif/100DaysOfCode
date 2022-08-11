/*
  ****
   ***
    **
     *
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows

  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int space = n - (n + 1 - i);
    while (space) // controls the spaces
    {
      cout << " ";
      space--;
    }

    int j = 1;
    while (j <= (n + 1 - i)) // prints the pattern
    {
      cout << "*";
      j++;
    }

    cout << endl;
    i++;
  }
}