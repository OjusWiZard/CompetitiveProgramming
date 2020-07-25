#include <bits/stdc++.h>

using namespace std;

void  solve()
{
	int n, k;
	cin >> n >> k;
	while( n-- )
	{
		int d;
		cin >> d;
		if( d % k == 0 )	cout << "1";
		else				cout << "0";
	}
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio( false );
	cin.tie( NULL );

	int t;
	cin>>t;
	while( t-- )
		solve();
}