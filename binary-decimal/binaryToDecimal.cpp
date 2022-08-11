#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
  long long int n;
  cout << "Enter the binary number: ";
  cin >> n;

  int ans = 0, i = 0;
  while (n != 0) 
  {
    int bit = n % 10;
    if (bit == 1)
      ans = ans + pow(2, i);
    n = n / 10;
    i++;
  }

  cout << "The decimal number is: " << ans;
  
  return 0;
}