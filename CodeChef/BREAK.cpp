#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t, s ;
	cin>>t>>s ;

	while( t-- )
	{
		int i=0, n, rank ;
		cin>>n ;
		vector<int> a, b, tableA, tableB ;
		bool cool = 1 ;
		for( int i = 0; i<n; i++ )
		{
			cin>>rank ;
			a.push_back( rank ) ;
		}
		for( int i = 0; i<n; i++ )
		{
			cin>>rank ;
			b.push_back( rank ) ;
		}
		sort( a.begin(), a.end() ) ;
		sort( b.begin(), b.end() ) ;

		if( b[0]>a[0] )
		{
			tableA.push_back( a[0] ) ;
			tableB.push_back( b[0] ) ;
			if( n==1 )
			{
				cout<<"YES\n" ;
				continue ;
			}
		}
		else
		{
			cout<<"NO\n" ;
			continue ;
		}

		/*for( int i = 0; i<n; i++ )
		{
			cout<<a[i]<<" " ;
		}
		cout<<"\n" ;
		for( int i = 0; i<n; i++ )
		{
			cout<<b[i]<<" " ;
		}
		cout<<"\n" ;*/

		tableA.push_back( a[0] ) ;
		tableB.push_back( b[0] ) ;

		for( int i = 2; i<2*n; i++ )
		{
			if( i%2==0 )
			{
				if( binary_search( tableA.begin(), tableA.end(), a[i/2] )||binary_search( tableB.begin(), tableB.end(), a[i/2] ) )
				{
					tableA.push_back( a[i/2] ) ;
				}
				else
				{
					cool = 0 ;
					//cout<<a[i/2]<<" not found on the table, i/2="<<i/2<<"\n" ;
					break ;
				}
			}
			else
			{
				if( b[i/2]>a[i/2] )
				{
					tableB.push_back( b[i/2] ) ;
				}
				else
				{
					cool = 0 ;
					//cout<<b[i/2]<<" is not greater than "<<a[i/2]<<", i/2="<<i/2<<"\n" ;
					break ;
				}
			}
		}

		if( cool )	cout<<"YES\n" ;
		else		cout<<"NO\n" ;

	}

	return 0;
}