#include <bits/stdc++.h>

using namespace std;

int main()
{
	int count = 0, n ;
	cin>>n ;
	for( int a = 1; a<=n; a++ )
	{
		for( int c = a; c<=n; c++ )
		{
			if( (int)sqrt(c*c-a*a) == sqrt( c*c-a*a ) && c!=a )	count++ ;
		}
	}
	cout<<count/2 ;
	return 0 ;
}