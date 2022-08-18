#include<iostream>
using namespace std;

int findUnique(int arr[], int size) // returns only the first unique element
{
    int count = 0;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
            return i;
        count = 0;
    }
    return -1;

    // another approach
    // int ans = 0;
    // for(int i = 0; i < size; i++) {
    //     ans = ans ^ arr[i];
    // }
    // return ans;
}

int unique[100];

int findAllUnique(int arr[], int size) // returns all the unique elements
{
    int count = 0, k = 0;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1) {
            unique[k] = arr[i];
            k++;
        }
        count = 0;
    }

    return k;
}

int main()
{
    // taking size
    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    if(size < 1)
        exit(0);

    // taking input array elements
    int myArray[1000];
    cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++) {
        cin >> myArray[i];
    }

    int choice;
    cout << "***** Unique Elements in an Array *****" << endl << "1. Find the first unique element" << endl << "2. Find all the unique elements";
    cout << "Please enter your option: ";
    cin >> choice;

    switch(choice)
    {
        case 1: {
            int pos = findUnique(myArray, size);
                
            if(pos >= 0)
                cout << myArray[pos] << " is a unique element" << endl;
            
            else 
                cout << "there is no unique element" << endl; 
                
            break;
        }

        case 2: {
            int len = findAllUnique(myArray, size);
                
            if(len == 0)
                cout << "there is no unique element" << endl;
                
            else { 
                for(int i = 0; i < len; i++) {
                    cout << unique[i] << ", ";
                }
                cout << "are the unique elements";
            }
                
            break;
        }
        
        default: 
                exit(0);
    }

    return 0;
}