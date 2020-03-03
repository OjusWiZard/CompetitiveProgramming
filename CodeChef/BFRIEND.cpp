#include<iostream>

using namespace std;

int main()
{
	int t;
	long int n, a, b, c, f, i;
	unsigned long int time, min;
	cin >> t;
	while (t--)
	{
		cin >> n >> a >> b >> c;
		for ( i = 1; i <= n; i++)
		{
			cin >> f;
			if (i == 1)
			{
				min = abs(b - f) + abs(f - a);
			}
			else if (abs(b - f) + abs(f - a) < min)
			{
				min = abs(b - f) + abs(f - a);
			}
		}
		cout << min + c << endl;
	}
	return 0;
}