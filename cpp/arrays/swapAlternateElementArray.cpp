#include<iostream>
using namespace std;

void swapAlternate(int myArray[], int size)
{
    int first = 0, second = 1;

    while(first < size && second < size)
    {
        // swapping values, can use swap() also
        int temp = myArray[first];
        myArray[first] = myArray[second];
        myArray[second] = temp;
        
        first += 2;
        second += 2;
    }
}

int main()
{
    // taking size
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    if(size < 2) {
        cout << "please provide atleast two elements";
        exit(0);
    }

    // taking input array elements
    int myArray[1000];
    cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> myArray[i];
    }

    // reversing array
    swapAlternate(myArray, size);

    // display output
    cout << "Reverse Array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
}