#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	string n ;
	cin>>n ;
	int count = n.length()==1?0:1 ;
	int N=0 ;

	for( int i = 0; i<n.length(); i++ )
	{
		N += n[i]-'0' ;
	}

	n = to_string( N ) ;
	while( N>9 )
	{
		N = 0 ;
		for( int i = 0; i<n.length(); i++ )
		{
			N += n[i]-'0' ;
		}

		n = to_string( N ) ;
		count++ ;
	}

	cout<<count ;

	return 0 ;
}