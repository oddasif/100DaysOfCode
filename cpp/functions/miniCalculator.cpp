#include<iostream>
using namespace std;


int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
float divide(float a, float b)
{
	return a/b;
}


int main()
{
    int a, b, n;
	cout << "Mini Calculator \nEnter any two numbers: " << endl;
	cin >> a >> b;

	cout << "Enter the operation: \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.AC \n 6.Exit" << endl;
	cin >> n;

	switch(n) {
        case 1: 
                cout << "The sum of " << a << " and " << b << " is " << add(a, b);
                break;
        case 2: 
                cout << "The difference of " << a << " and " << b << " is " << sub(a, b);
                break;
        case 3: 
                cout << "The product of " << a << " and " << b << " is " << mul(a, b);
                break;
        case 4: 
                cout << "The division of " << a << " and " << b << " is " << divide(a, b);
                break;
        case 5: 
                main();
        case 6:
                exit(0);             
        default:
                cout << "Enter a valid option!" << endl;
    }

    cout << "\nDo you want to exit?(Y/N)" << endl;
    char ch;
    cin >> ch;

    if(ch == 'N' || ch == 'n') 
        main();

    return 0;
}