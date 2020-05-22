#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n ;
	cin>>n ;

	vector<int> u(n), v(n) ;
	vector<unsigned long long> psv( n ), psu( n ) ;
	unsigned long long sum = 0 ;
	for( int i = 0; i<n; i++ )
	{
		cin>>v[i] ;
		u[i] = v[i] ;
		sum += v[i] ;
		psv[i] = sum ;
	}
	sort( u.begin(), u.end() ) ;
	sum = 0 ;
	for( int i = 0; i<n; i++ )
	{
		sum += u[i] ;
		psu[i] = sum ;
	}

	int m ;
	cin>>m ;
	while( m-- )
	{
		int type, l, r ;
		sum = 0 ;
		cin>>type ;
		switch( type )
		{
			case 1:
				cin>>l>>r ;
				cout<<psv[r-1]-(l==1?0:psv[l-2])<<"\n" ;
				break;
			case 2:
				cin>>l>>r ;
				cout<<psu[r-1]-(l==1?0:psu[l-2])<<"\n" ;
				break; 
		}
	}

	return 0 ;
}