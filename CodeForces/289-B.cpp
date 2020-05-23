#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, m, d ;
	cin>>n>>m>>d ;
	n *= m ;

	vector<int> a( n ) ;
	for( int i = 0; i<n; i++ )
	{
		cin>>a[i] ;
	}
	sort( a.begin(), a.end() ) ;

	for( int i = 1; i<n; i++ )
	{
		a[i] -= a[0] ;
	}
	a[0] = 0 ;

	bool pos = true ;
	for( int i = 1; i<n; i++ )
	{
		if( a[i]%d )	pos = false ;
	}

	if( pos )
	{
		for( int i = 0; i<n; i++ )
		{
			a[i] /= d ;
		}
		int avg = a[n/2] ;
		int mx=0, mn=0 ;
		for( int i = 0; i<n; i++ )
		{
			mx += abs( a[i]-avg ) ;
		}
		avg++ ;
		for( int i = 0; i<n; i++ )
		{
			mn += abs( a[i]-avg ) ;
		}
		cout<<min( mx, mn ) ;
	}
	else
	{
		cout<<-1 ;
	}

	return 0 ;
}