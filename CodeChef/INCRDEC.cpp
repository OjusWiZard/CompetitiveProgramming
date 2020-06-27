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
		bool pos = true ;
		int n, m=0 ;
		cin>>n ;
		vector<int> a(n), f(200000,0) ;
		for( int i = 0; i<n; i++ )
		{
			cin>>a[i] ;
			m = max( m, a[i] ) ;
			f[a[i]-1]++ ;
			if( f[a[i]-1]>2 )	pos = false ;
		}
		if( f[m-1]>1 )	pos = false ;
		if( pos )
		{
			stack<int> left ;
			cout<<"YES\n" ;
			sort( a.begin(), a.end() ) ;
			for( int i = 0; i<n; i++ )
			{
				if( f[a[i]-1] )
				{
					cout<<a[i]<<" " ;
					if( f[a[i]-1]==2 )
					{
						left.push( a[i] ) ;
					}
					f[a[i]-1] = 0 ;
				}
			}
			while( !left.empty() )
			{
				cout<<left.top()<<" " ;
				left.pop() ;
			}
			cout<<"\n" ;
		}
		else cout<<"NO\n" ;
	}

	return 0 ;
}