// understanding sizeof operator
#include<iostream>
using namespace std;
int main()
{
	int i;
	char c;
	float f;
	double d;
	long long int lli;
	bool b;
	
	
	cout << " i is " << sizeof(i) << " bytes" << endl; 
	cout << " c is " << sizeof(c) << " bytes" << endl; 
	cout << " f is " << sizeof(f) << " bytes" << endl; 
	cout << " d is " << sizeof(d) << " bytes" << endl; 
	cout << " lli is " << sizeof(lli) << " bytes" << endl; 
	cout << " b is " << sizeof(b) << " bytes" << endl; 

	return 0;
}