#include<iostream>
using namespace std;

void sortPlease(int arr[], int n) 
{
    int left = 0, right = n-1;

    while(left < right) 
    {
        while(arr[left] == 0 && left < right)
            left++;

        while(arr[right] == 1 && left < right)
            right--;

        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int n;
	cout << "Enter the number of elements in array: ";
	cin >> n;

	// input
    int arr[100];
	cout << "Enter the elements: ";
	for(int i=0; i<n; i++) {
		cin >> arr[i];
        if(arr[i] < 0 || arr[i] > 1)
            exit(0);
    }

    // sorting
    sortPlease(arr, n);

    // output print
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}