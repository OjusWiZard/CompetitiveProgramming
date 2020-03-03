#include <iostream>

using namespace std;

int main()
{
	unsigned long int n, k, num, count=0;
	cin >> n >> k;
	while (n--)
	{
		cin >> num;
		if (num%k==0)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}