/*
  AAAA
  BBBB
  CCCC
  DDDD
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; //for the sake of simplicity

  int i = 1;
  char ch = 'A';

  while (i <= n) // control the no. of rows
  {
    int j = 1;
    while (j <= n) // prints the pattern
    {
      // or just do this
      // char ch = 'A' + i - 1;
      cout << ch;
      j++;
    }
    
    cout << endl;
    i++;
    ch++;
  }
}