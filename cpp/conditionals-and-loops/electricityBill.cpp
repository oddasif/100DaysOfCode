// determining the electricity bill cost by taking number of units used as input

#include<iostream>
using namespace std;
	
int main()
{
	int noOfUnits;
	float billAmount;
	
	cout << "Enter the number of units consumed: ";
	cin >> noOfUnits;
	
	if(noOfUnits > 0 && noOfUnits <= 50)
		billAmount = 0.75*noOfUnits; //37.5
	
	else if(noOfUnits > 50 && noOfUnits <= 100)
		billAmount = 37.5+((noOfUnits-50)*1.25);
	
	else if(noOfUnits > 100 && noOfUnits <= 150)
		billAmount = 37.5+62.5+((noOfUnits-100)*2);
	
	else if(noOfUnits > 150 && noOfUnits <= 200)
		billAmount = 37.5+62.5+100+((noOfUnits-150)*2.75);
	
	else if(noOfUnits > 200)
		billAmount = 37.5+62.5+100+137.5+((noOfUnits-200)*3);
	
	cout << "\nBill amount is Rs." << billAmount;

	return 0;
}