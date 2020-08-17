#include<bits/stdc++.h>

using namespace std ;

void  solve()
{
	int n, k;
	cin>>n>>k;
	int p[n];
	for (int i = 0; i < n; i++)
	{
		cin>>p[i];
	}
	
	int ans = INT_MAX, out = -1;
	for (int i = 0; i < n; i++)
	{
		if( k % p[i] == 0 && k>p[i] )
		{
			if( k/p[i] < ans )
			{ 
				ans = k/p[i];
				out = p[i];
			}
		}
	}
	
	cout<< out << "\n";
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