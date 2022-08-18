#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int arr[], int n) {
    
    int min = INT_MAX;

    for(int i=0; i<n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}

int getMax(int arr[], int n) {
    
    int max = INT_MIN;

    for(int i=0; i<n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}


int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    if(size < 1)
        exit(0);

    int myArray[1000];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<size; i++) {
        cin >> myArray[i];
    }

    cout << "min value = " << getMin(myArray, size) << endl;

    cout << "max value = " << getMax(myArray, size) << endl;

    return 0;
}

// can also use min() & max() function