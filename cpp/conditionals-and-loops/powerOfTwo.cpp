// determining whether the given number is power of 2 or not 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    int x = n;
    int count = 0;
    while((x%2 == 0) && (x != 0))
    {
        x = x/2;
        count++;
    }
    
    int m = 1;
    for(int i=1; i <= count; i++)
        m = m * 2;
    
    if(m == n)
        cout << n << " is a power of 2";
    
    else
        cout << n << " is not a power of 2";
    
    return 0;
}