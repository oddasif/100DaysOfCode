// opening on screen keyboard
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Do you want to shutdown your PC? \n 1. Open \n 2. Exit \n Enter Choice: ";
	cin >> x;

	if(x==1) 
		system("C:\\Windows\\System32\\shutdown /s");
		// system("C:\\Windows\\System32\\shutdown /s /t 0"); //immediately
		// system("C:\\Windows\\System32\\shutdown /r"); //restart
		// system("C:\\Windows\\System32\\shutdown /r /t 0"); //restart immediately

	return 0;
}