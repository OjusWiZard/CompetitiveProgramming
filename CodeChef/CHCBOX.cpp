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
		int n, w[100001], max = 0, numberOfMax = 0, k=0 ;
		vector<int> iOfMax ;
		cin>>n ;
		for( int i = 1; i<=n; i++ )
		{
			cin>>w[i] ;
			if( w[i]>max ) max = w[i] ;
		}
		for( int i = 1; i<=n; i++ )
		{
			if( w[i]==max )
			{
				numberOfMax++ ;
				iOfMax.push_back( i ) ;
			}
		}
		for( int i = 0; i<numberOfMax-1; i++ )
		{
			if( iOfMax[i+1]-iOfMax[i]>n/2 )
			{
				k += iOfMax[i+1]-iOfMax[i]-( n/2 ) ;
			}
		}
		if( iOfMax[0]+n-iOfMax[numberOfMax-1]>n/2 )	k += iOfMax[0]+n-iOfMax[numberOfMax-1]-(n/2) ;

		if( numberOfMax==1 ) k = n/2 ;
		cout<<k<<"\n" ;
	}

	return 0 ;
}