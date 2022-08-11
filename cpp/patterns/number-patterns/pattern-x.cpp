/*
  1234
   234
    34
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

    int j = i;
    while (j <= n) // prints the pattern
    {
      cout << j;
      j++;
    }
    
    cout << endl;
    i++;
  }
}