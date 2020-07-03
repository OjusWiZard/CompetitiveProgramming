#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n ;
		cin>>n ;
		n = 4*n-1 ;
		unordered_set<int> X, Y ;
		while( n-- )
		{
			int x, y ;
			cin>>x>>y ;
			if( X.find( x )==X.end() )	X.insert( x ) ;
			else						X.erase( x ) ;
			if( Y.find( y )==Y.end() )	Y.insert( y ) ;
			else						Y.erase( y ) ;
		}
		cout<<*X.begin()<<" "<<*Y.begin()<<"\n" ;
	}

	return 0 ;
}