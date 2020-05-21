#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, q, minF=INT_MAX, k=0 ;
		vector<int> orona( 26, 0 ) ;
		cin>>n>>q ;
		for( int i = 0; i<n; i++ )
		{
			char ch ;
			cin>>ch ;
			orona[ch-'a']++ ;
		}
		sort( orona.begin(), orona.end() ) ;
		reverse( orona.begin(), orona.end() ) ;
		while( orona[k] && k<26 )
		{
			minF = min( minF, orona[k] ) ;
			k++ ;
		}
		while( q-- )
		{
			int c, j = 0 ;
			cin>>c ;
			long long int pending=0 ;
			while( orona[j] && j<26 )
			{
				pending += max( orona[j]-c, 0 ) ;
				j++ ;
			}
			cout<<pending<<"\n" ;
		}
	}

	return 0 ;
}