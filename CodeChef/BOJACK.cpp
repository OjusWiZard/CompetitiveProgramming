#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

void  solve() {
	int n;
	cin >> n;

	unordered_set<char> found;
	while( n-- )
	{
		char c;
		cin >> c;
		if( found.find( c ) == found.end() )	found.insert( c );
		else									found.erase( c );
	}

	if( found.empty() )	cout << "YES\n";
	else				cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio( false );
	cin.tie( NULL );

	int t;
	cin>>t;
	while( t-- )
		solve();
}