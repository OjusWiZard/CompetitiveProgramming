#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t; 
	while( t-- )
	{
		int n, sum = 0, zeros = 0 ;
		cin>>n ;
		while( n-- )
		{
			int a ;
			cin>>a ;
			sum += a ;
			if( a==0 )	zeros++ ;
		}
		if( 0-sum==zeros )	cout<<zeros+1<<"\n" ;
		else cout<<zeros<<"\n" ;
	}

	return 0 ;
}