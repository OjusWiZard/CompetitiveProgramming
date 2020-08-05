#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n, minA=INT_MAX, minB=INT_MAX;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		minA = min(minA, a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		minB = min(minB, b[i]);
	}

	long long ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += max(max(0, a[i] - minA), max(0, b[i] - minB));
	}

	cout << ans << "\n";
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin >> t ;
	while( t-- )
		solve();
}