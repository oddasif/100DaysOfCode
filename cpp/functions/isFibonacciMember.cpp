#include<iostream>
using namespace std;

bool checkMember(int n)
{
	if(n >= 0 && n <= 10000) 
	{
    	int a=0, b=1, c=0, fn=0;
    	for(int i=0; i<=n || (i>n && fn<=n); i++) // i <= n fails when nth term value is > i , that's why second condition i > n when fn <= n  
		{
			if(i==0)
				fn=0;

        	else if(i==1)
            	fn=1;
        
        	else 
			{
            	fn = a + b;
            	c = b;
            	b = a + b;
            	a = c;
        	}

        	if(fn == n)
        		break;

    	}
        if(fn == n)
            return 1;     
	}
	return 0;
}   


int main() 
{
	int n;
	cout << "Enter the number: ";
	cin >> n;

	if(checkMember(n))
		cout << "true";
	
	else
		cout << "false";

	return 0;
}