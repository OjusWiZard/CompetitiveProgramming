#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

long long modPow(long long a, long long x)
{
	long long res = 1;
	while (x > 0)
	{
		if (x % 2 != 0)
			res = (res * a) % mod;
		a = (a * a) % mod;
		x /= 2;
	}
	return res;
}

long long modInverse(long long a)
{
	return modPow(a, mod - 2);
}

long long nCrMod(long long n, long long k)
{
	long long nFac = 1;
	for (int i = 0; i < k; i++)
		nFac = (nFac * (n - i)) % mod;

	long long dFac = 1;
	for (int i = 1; i <= k; i++)
		dFac = (dFac * i) % mod;

	return (nFac * modInverse(dFac)) % mod;
}

void solve()
{
	long long ans = 0, n, maxC = 0;
	cin >> n;
	unordered_map<int, int> freq;
	for (int i = 0, c; i < n; i++)
	{
		cin >> c;
		maxC = max((int)maxC, c);
		freq[c]++;
	}

	if (freq[maxC] % 2)
		ans = modPow(2, n) % mod;
	else
		ans = (modPow(2, n) % mod - (modPow(2, n - freq[maxC]) % mod) * nCrMod(freq[maxC], freq[maxC] / 2) % mod) % mod;
	if (ans < 0)
		ans = (ans + mod) % mod;
	cout << ans % mod << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
		solve();
}