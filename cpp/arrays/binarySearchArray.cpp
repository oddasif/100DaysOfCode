// implementation of binary search using iterative approach

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0, end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == key)
            return mid;

        if(key > arr[mid])
            start = mid + 1;
        
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }  

    return -1;
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements in ascending order: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, size, key);

    if(index >= 0)
        cout << key <<" is present at index " << index + 1 << " in the array";

    else 
        cout << key <<" is not present in the array";

    return 0;
}