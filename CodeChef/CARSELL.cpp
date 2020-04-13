#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, maxProfit=0, price ;
		vector<int> p ;
		cin>>n ;
		for( int i = 0; i<n; i++ )
		{
			cin>>price ;
			p.push_back( price ) ;
		}
		sort( p.begin(), p.end(), greater<int>() ) ;
		for( int i = 0; i<n; i++ )
		{
			if( p[i]-i>0 )
				maxProfit += p[i]-i ;
			if( maxProfit>=1000000007 )	maxProfit = maxProfit%1000000007 ;
		}
		cout<<maxProfit<<"\n" ;
	}

	return 0 ;
}