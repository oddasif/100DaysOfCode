// finding whether the given alphabet is uppercase or lowercase using its asci value
#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter any alphabet: ";
	cin >> ch;

	if(ch >= 65 && ch <= 90) 
		cout << ch << " is an Upper Case Alphabet";
	
	else if(ch >= 97 && ch <= 122)
		cout << ch << " is a lower case alphabet ";
	
	else
		cout << "Character entered is not an alphabet!";
	
	return 0;
}