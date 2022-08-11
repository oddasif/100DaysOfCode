/*
  1111
   222
    33
     4
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
 
  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int space = i - 1;
    while (space) // controls the spaces
    {
      cout << " ";
      space--;
    }

    int j = 1;
    while (j <= (n + 1 - i)) // prints the pattern
    {
      cout << i;
      j++;
    }
    cout << endl;
    i++;
  }
}