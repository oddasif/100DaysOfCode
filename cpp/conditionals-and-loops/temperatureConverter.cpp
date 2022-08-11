// temperature converter celsius to fahrenheit and vice versa

#include<iostream>
using namespace std;

int main()
{
	int celsiusTemp, fahrenheitTemp, choice;
	
	cout << " ******** Temperature Converter ******** " << endl;
	cout << " 1. Fahrenheit to Celsius Converter \n 2. Celsius to Fahrenheit Converter \n Enter your choice: ";
	cin >> choice;

	if(choice == 1) {
		cout << "\n Enter Temperature in Celsius: ";
		cin >> celsiusTemp;
		fahrenheitTemp = (1.8 * celsiusTemp) + 32;
		cout << "\n " << celsiusTemp << "C is equal to " << fahrenheitTemp << "F";
	}

	else if(choice == 2) {
		cout << "\n Enter Temperature in Fahrenhiet: ";
		cin >> fahrenheitTemp;
		celsiusTemp = (fahrenheitTemp - 32) / 1.8;
		cout << "\n " << fahrenheitTemp << "F is equal to " << celsiusTemp << "C";
	}

	else 
		cout << "\n Invalid Input!";

	return 0;
}