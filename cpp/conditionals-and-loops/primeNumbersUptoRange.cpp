#include<iostream>
using namespace std;
int main()
{   
    int n, count=0;
    cout << "Enter the range to display prime numbers: ";
    cin >> n;
    
    cout << "List of prime numbers from 1 to " << n << " is: ";
    for(int i=2; i<=n; i++) {
        for(int j=2; j<=n; j++) {
            if(i % j == 0) 
                count++;
            if(count > 1)
                break;
        }
        if(count == 1)
            cout << i << " ";
        count = 0;
    }
    
    return 0;
}