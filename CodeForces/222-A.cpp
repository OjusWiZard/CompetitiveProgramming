#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, a[100000], ll ;
	bool maybe = 1 ;
	cin>>n>>k ;
	ll = k-1 ;
	for( int i = 0; i<n; i++ )
	{
		cin>>a[i] ;
	}

	for( int i = k-1 ; i<n ; i++ )
	{
		if( a[i]!=a[k-1] ) maybe = 0 ;
	}

	if( maybe )
	{
		for( int i = k-2 ; i>=0 ; i-- )
		{
			if( a[i]==a[k-1] ) ll = i ;
			else break ;
		}
		cout<<ll ;
	}
	else
	{
		cout<<-1 ;
	}

	return 0 ;
}