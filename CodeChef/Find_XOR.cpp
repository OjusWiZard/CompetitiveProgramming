#include <bits/stdc++.h>

using namespace std;

long long grader(int o, long long k)
{
	cout << o << " " << k << endl;
	long long res;
	cin >> res;
	if (res == -1)
		exit(0);
	else
		return res;
}

bool solve()
{
	long long n, sum, x = 0, res[20], ks[20];
	cin >> n;

	for (int i = 0, k = 1; i < 20; i++, k = k << 1, k |= 1)
	{
		ks[i] = k;
		res[i] = grader(1, k);
	}

	for (long long i = 19; i > 0; i--)
	{
		long long d = (res[i] - res[i - 1]) / (ks[i] - ks[i - 1]);
		x = x << 1;
		x |= ((n - d) / 2) & 1;
	}
	x = x << 1;
	x |= (n + res[0]) & 1;

	return grader(2, x) == 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		if (!solve())
			break;
	return 0;
}