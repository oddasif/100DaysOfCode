/*
     1
    121
   12321
  1234321
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int space = n - i;
    while (space) // controls the spaces
    {
      cout << " ";
      space--;
    }

    int j = 1;
    while (j <= i) // prints the 1st pattern
    {
      cout << j;
      j++;
    }

    int k = i - 1;
    while (k) // prints the 2nd pattern
    {
      cout << k;
      k--;
    }
    cout << endl;
    i++;
  }
}