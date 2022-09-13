#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {

    for(int i = 0; i < size; i++) {
        if(arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = linearSearch(arr, size, key);

    if(index >= 0)
        cout << key <<" is present at index " << index + 1 << " in the array";

    else 
        cout << key <<" is not present in the array";

    return 0;
}