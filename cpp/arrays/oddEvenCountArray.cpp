// displaying how many even & odd numbers are present in the array

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;

	int arr[100];
	cout << "Enter the elements: ";
	for(int i=0; i<n; i++)
		cin >> arr[i];

	int evenCount = 0, oddCount = 0;
	for(int i=0; i<n; i++)
	{
		if (arr[i] % 2 == 0)
			evenCount++;

		else
			oddCount++;
	}
	cout << "even numbers = " << evenCount << "\nodd numbers = " << oddCount;
	return 0;
}	