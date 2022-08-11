/*
  4321
  4321
  4321
  4321
*/

#include <iostream>
using namespace std;

int main() {
  int n = 4; // input rows
  
  int i = 1;
  while (i <= n) // control the no. of rows
  {
    int j = n;
    while (j) // prints the numbers from n to 1
    {
      cout << j;
      j--;
    }
    /* alternate method
      int j = 1;
      while(j <= n) {
        cout << n-j+1;
        j++;
      }
    */
    
    cout << endl;
    i++;
  }
}