#include <bits/stdc++.h>

using namespace std;

void solve()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int n1 = a * d - c * b, d1 = a * d, n2 = b * c - d * a, d2 = b * c;
	n1 /= __gcd(a * d - c * b, a * d);
	d1 /= __gcd(a * d - c * b, a * d);
	n2 /= __gcd(b * c - d * a, b * c);
	d2 /= __gcd(b * c - d * a, b * c);

	if (a * d >= c * b)
		cout << n1 << '/' << d1 << "\n";
	else
		cout << n2 << '/' << d2 << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	t = 1;
	while (t--)
		solve();
}