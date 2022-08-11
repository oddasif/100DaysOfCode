// calculating the volume of sphere
// understanding constants

#include<iostream>
using namespace std;
#define PI 3.148
int main()
{
//	const float PI=3.14; //another way to use constant
	int r, vol;
	cout << "\nEnter the radius of sphere in mm: ";
	cin >> r;

	vol = ((4*PI*r*r*r)/3);
	cout << "\n The Volume of the sphere is " << vol << " mm cube";

	return 0;
}