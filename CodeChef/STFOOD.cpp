#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t, n, s, v{}, p, i;
	long int max;
	cin >> t;
	while (t--)
	{
		cin >> n;
		max = 0;
		for (i = 1; i <= n; i++)
		{
			cin >> s >> p >> v;
			s++;
			if ( floor((p / s))*v > max)	max = floor((p / s))*v;
		}
		cout << max << endl;
	}
	return 0;
}