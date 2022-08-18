#include<iostream>
using namespace std;

void reverseArray(int myArray[], int size)
{
    int start = 0, end = size - 1;

    while(start < end)
    {
        // swapping values
        int temp = myArray[start];
        myArray[start] = myArray[end];
        myArray[end] = temp;
        
        start++;
        end--;
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
    reverseArray(myArray, size);

    // display output
    cout << "Reverse Array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
}