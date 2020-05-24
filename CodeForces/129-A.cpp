#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, total=0 ;
	cin>>n ;
	vector<int> bags( n ) ;
	for( int i = 0; i<n; i++ )
	{
		cin>>bags[i] ;
		total += bags[i] ;
	}

	if( total%2 )
	{
		int ans = 0 ;
		for( int i = 0; i<n; i++ )
		{
			if( bags[i]%2 )	ans++ ;
		}
		cout<<ans ;
	}
	else
	{
		int ans = 0 ;
		for( int i = 0; i<n; i++ )
		{
			if( bags[i]%2==0 )	ans++ ;
		}
		cout<<ans ;
	}

	return 0 ;
}