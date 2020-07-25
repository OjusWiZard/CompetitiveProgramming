#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

vector<long long> a;
void  solve()
{
	long long n, OR = 0;
	cin >> n;
	a.clear();
	unordered_set<long long> found;
	for( int i = 0; i < n; i++ )
	{
		long long ai;
		cin >> ai;
		a.push_back( ai );
	}
	sort( a.begin(), a.end(), greater_equal<>() );
	for( int i = 0; i < n; i++ )
	{
		OR |= a[i];
		if( found.find( OR ) != found.end() )
		{
			cout << "NO\n";
			return;
		}
		else found.insert( OR );
	}
	cout << "YES\n";
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