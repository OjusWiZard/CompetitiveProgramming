#include <bits/stdc++.h>
using namespace std;

int numberOfOnes( int n )
{
	int numberOfOnes = 0 ;
	while( n!=0 )
	{
		n = n&( n-1 ) ;
		numberOfOnes++ ;
	}
	return numberOfOnes ;
}

int main()
{
 	ios::sync_with_stdio( false ) ;
 	cin.tie ( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, q, serial, numberOfaEven=0, numberOfaOdd=0 ;
		cin>>n>>q ;
		for( int i = 0; i<n; i++ )
		{
			cin>>serial ;
			if( numberOfOnes( serial )%2 )	numberOfaOdd++ ;
			else	numberOfaEven++ ;
		}
		for( int j = 0; j<q; j++ )
		{
			cin>>serial ;
			if( numberOfOnes(serial)%2 )	cout<<numberOfaOdd<<" "<<numberOfaEven<<"\n" ;
			else							cout<<numberOfaEven<<" "<<numberOfaOdd<<"\n" ;
		}

	}

	return 0;
}
