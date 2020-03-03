#include <bits/stdc++.h>

using namespace std;

bool isPrime( int num )
{
	int rt = sqrt( num ) ;
	for( int i = 2 ; i<=rt ; i++ )
	{
		if( num%i==0 )	return false ;
	}
	return true ;
}

int main()
{
	int n, printed = 1, lastPrinted=2 ;
	cin>>n ;
	
	cout<<2<<" ";

	while( printed<n )
	{
		for( int i = lastPrinted+1 ; ; i++ )
		{
			if( isPrime( i ) )
			{
				cout<<i<<" " ;
				lastPrinted = i ;
				printed++ ;
				break ;
			}
		}
	}

	return 0 ;
}