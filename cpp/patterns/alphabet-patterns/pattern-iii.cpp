/*
  ABCD
  EFGH
  IJKL
  MNOP
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4;
  
  int i = 1;
  char ch = 'A';
  
  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= n) // prints the pattern
    {
      cout << ch;
      ch++;
      j++;
    }

    cout << endl;
    i++;
  }
}