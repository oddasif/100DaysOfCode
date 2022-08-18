#include<iostream>
using namespace std;
int main()
{
    // taking size
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    // taking input array elements and also doing sum of elements
    int myArray[1000];
    int sum = 0;

    cout << "Enter the array elements: ";

    for(int i = 0; i < size; i++) {
        cin >> myArray[i];
        sum += myArray[i];
    }

    cout << "The sum of all elements in array is: " << sum << endl;

    return 0;
}