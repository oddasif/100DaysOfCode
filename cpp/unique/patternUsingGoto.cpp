//printing the star pyramid pattern using goto & start statement
//*****
//****
//***
//**
//*

#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n, x;
	cout << "Enter the number of lines in pattern: ";
	cin >> n;
	
	start:
	x = n;
	
	if(n <= 0) 
		exit(0);
	
	else
	{
		start_again:
		if(x!=0)
		{
			cout << "*";
			x--;
			goto start_again;			
		}
		cout << endl;
		n--;
		goto start;
	}
}