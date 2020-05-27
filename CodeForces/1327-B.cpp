#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, k, virginDaughter=0, married = 0 ;
		cin>>n ;
		vector<bool> kingdom( n ) ;
		vector< queue<int> > daughter( n ) ;
		for( int i = 0; i<n; i++ )
		{
			int k ;
			cin>>k ;
			while( k-- )
			{
				int p ;
				cin>>p ;
				daughter[i].push( p ) ;
			}
		}

		for( int i = 0; i<n; i++ )
		{
			bool marriage = false ;
			while( daughter[i].size()!=0 )
			{
				if( !kingdom[daughter[i].front()-1] )
				{
					marriage = true ;
					married++ ;
					kingdom[daughter[i].front()-1] = true ;
					daughter[i].pop() ;
					break ;
				}
				daughter[i].pop() ;
			}
			if( !marriage )	virginDaughter = i ;
		}

		if( married==n )	cout<<"OPTIMAL\n" ;
		else
		{
			cout<<"IMPROVE\n"<<virginDaughter+1<<" " ;
			for( int i = 0; i<n; i++ )
			{
				if( !kingdom[i] )
				{
					cout<<i+1<<"\n" ;
					break ;
				}
			}
		}
	}

	return 0 ;
}