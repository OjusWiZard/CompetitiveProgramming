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
		vector<int> series, indexOfTwos ;
		int element ;
		long long int n, ans ;
		cin>>n ;
		ans = n*( n+1 )/2 ;
		for( int i = 0; i<n; i++ )
		{
			cin>>element ;
			if( abs( element )%4==2 )	indexOfTwos.push_back( i ) ;
			series.push_back( element ) ;
		}
		for( int two = 0; two<indexOfTwos.size(); two++ )
		{
			int i = indexOfTwos[two], left=0, right=0 ;
			for( int j = i-1; j>=0; j-- )
			{
				if( abs(series[j]%2) ) left++ ;
				else break ;
			}
			for( int j = i+1; j<series.size(); j++ )
			{
				if( abs(series[j]%2) ) right++ ;
				else break ;
			}
			ans -= ( (long long int)left+1 )*( (long long int)right+1 ) ;
		}
		cout<<ans<<"\n" ;
	}
	return 0 ;
}