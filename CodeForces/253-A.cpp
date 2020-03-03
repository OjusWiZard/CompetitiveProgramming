#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m ;
	freopen( "input.txt", "r", stdin );
	freopen( "output.txt", "w", stdout );
	cin>>n>>m ;
	if( n>m )
	{
		while( n||m )
		{
			if( n )
			{
				cout<<'B' ;
				n-- ;
			}
			if( m )
			{
				cout<<'G' ;
				m-- ;
			}
		}
	}
	else
	{
		while( n||m )
		{
			if( m )
			{
				cout<<'G' ;
				m-- ;
			}
			if( n )
			{
				cout<<'B' ;
				n-- ;
			}
		}
	}
	return 0 ;
}