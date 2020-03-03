#include <bits/stdc++.h>

using namespace std;

void f( int ) ;
int n, number[1001] ;

int main()
{
	cin>>n ;
	/*for( int i=1 ; i<=n ; i++ )
	{
		number[i] = i ;
		//cout<<number[i]<<" " ;
	}
	f( n ) ;
	for( int i = 1; i<=n; i++ )
	{
		cout<<number[i]<<" " ;
	}*/
	cout<<n<<" " ;
	for( int i = 0; i<n-1; i++ )
	{
		cout<<i+1<<" " ;
	}

	return 0 ;
}

void f( int x )
{
	if( number[x]==1 )	return ;
	else
	{
		f( x-1 ) ;
		swap( number[x], number[x-1] ) ;	
	}
}