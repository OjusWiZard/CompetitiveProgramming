#include <bits/stdc++.h>

using namespace std;

void shift( int& a, int& b, int& c )
{
	swap( b, c ) ;
	swap( a, b ) ;
}

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		struct instruct
		{
			int i1, i2, i3 ;
			instruct( int a, int b, int c )
			{
				i1 = a ;
				i2 = b ;
				i3 = c ;
			}
		};
		struct pairs
		{
			int a, b ;
			pairs( int p, int q )
			{
				a = p ;
				b = q ;
			}
		};
		int n, k ;
		cin>>n>>k ;
		vector<int> p( n+1 ) ;
		vector<instruct> out ;
		vector<pairs> ps ;
		for( int i = 1; i<=n; i++ )	cin>>p[i] ;

		for( int i = 1; i<=n; i++ )
			if( p[p[i]]==i&&p[i]!=i&&i<p[i] )	ps.push_back( pairs( i, p[i] ) ) ;

		int i = 1 ;
		while( i<=n )
		{
			if( i!=p[i]&&p[p[i]]!=i )
			{
				int j = p[i], k = p[j] ;

				out.push_back( instruct( i, j, k ) ) ;
				shift( p[i], p[j], p[k] ) ;

				if( p[p[i]]==i&&p[i]!=i )	ps.push_back( pairs( i, p[i] ) ) ;
				if( p[p[j]]==j&&p[j]!=j )	ps.push_back( pairs( j, p[j] ) ) ;
				if( p[p[k]]==k&&p[k]!=k )	ps.push_back( pairs( k, p[k] ) ) ;
				i-- ;
			}
			i++ ;
		}

		if( ps.size()>1 )
		{
			for( int ex = 0; ex<ps.size()-1; ex += 2 )
			{
				out.push_back( instruct( ps[ex].a, ps[ex].b, ps[ex+1].a ) ) ;
				shift( p[ps[ex].a], p[ps[ex].b], p[ps[ex+1].a] ) ;

				out.push_back( instruct( ps[ex].a, ps[ex+1].b, ps[ex+1].a ) ) ;
				shift( p[ps[ex].a], p[ps[ex+1].b], p[ps[ex+1].a] ) ;
			}
		}

		bool sorted = true ;
		for( int i = 1; i<n; i++ )
		{
			if( p[i]>p[i+1] )	sorted = false ;
		}
		if( !sorted||out.size()>k )
		{
			cout<<-1<<"\n" ;
		}
		else
		{
			cout<<out.size()<<"\n" ;
			for( int i = 0; i<out.size(); i++ )
			{
				cout<<out[i].i1<<" "<<out[i].i2<<" "<<out[i].i3<<"\n" ;
			}
		}
	}

	return 0 ;
}