/*
  1234
  1234
  1234
  1234
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= n) // prints the numbers from 1 to n
    {
      cout << j;
      j++;
    }
    
    cout << endl;
    i++;
  }
}