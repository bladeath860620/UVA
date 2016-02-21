#include <iostream>

using namespace std;

bool GCD(int n, int d)
{
	int temp;
	if(n < d) {
		temp = n;
		n = d;
		d = temp;
	}
	while(temp = n % d != 0) {
		n = d;
		d = temp;
	}
	if(d == 1) return true;
	else return false;
	/*
	while(n > 0 && d > 0)
	{
		if(n >= d)
		{
			n = n%d;
		}
		else
		{
			d = d%n;
		}
	}
	if(n == 1 || d == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
*/
}

int main()
{
	int count = 0;
	int input;
	int n, d;
	while(1)
	{
		cin >> input;
		if(input == 0)
		{
			break;
		}
		for(d = 1; d <= 1 && count != input; d++)
		{
			for(n = 0; n <= d && count != input; n++)
			{
				if(GCD(n,d))
				{
					count++;
				}
			}
		}
		for(d = 2; d <= 200000 && count != input; d++)
		{
			for(n = 0; n < d && count != input; n++)
			{
				if(GCD(n,d))
				{
					count++;
				}
			}
		}
		cout << n-1 << '/' << d-1 << endl;
		count = 0;
		n = 0;
		d = 1; 
	} 
}