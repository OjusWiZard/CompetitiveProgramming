#include <bits/stdc++.h>

using namespace std;

void  solve()
{
	long long n, m, x, y, ans = 0;
	cin >> n >> m >> x >> y;

	if( n == 1 && m == 1 )
	{
		cout << x << "\n";
		return;
	}

	long long large = ( n * m ) / 2 + ( n * m ) % 2;
	long long small = ( n * m ) / 2;

	int limit = min( x, y );

	ans += large * limit;
	
	if( y > limit )	ans += small * ( min( y - limit, x ) );

	cout << ans << "\n";
	return;
}

int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie( NULL );

	int t;
	cin >> t;
	while( t-- )
		solve();
}