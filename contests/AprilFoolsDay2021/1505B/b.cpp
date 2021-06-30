#include <bits\stdc++.h>
#include <math.h>

using namespace std;


// function prototypes
int sumdigits(int x);

int main()
{

	int hello;
	cin >> hello;
	if(hello > 9)
	{
		while (hello > 9)
		{
			hello = sumdigits(hello);
		}
	}
	cout << hello;
	return 0;
}

int sumdigits(int x)
{
	int sum = 0;
	if (x < 0)
	{
		cout << "something went TERRIBLY WRONG" << endl;
	}
	else if (x < 10)
	{
		sum = x;
	}
	else
	{
		while(x > 9)
		{
			int n = x % 10;
			sum += n;
			x -= n;
			x /= 10;
		}
		sum += x;
	}
	return sum;
}
