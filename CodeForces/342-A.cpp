#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, arr[100000], ar[33333][3] ;
	bool possible = 1 ;
	cin>>n ;
	for( int i = 0; i<n; i++ )
	{
		cin>>arr[i] ;
	}

	sort( arr, arr+n ) ;
	
	for( int i = 0 ; i<n ; i++ )
	{
		ar[i%( n/3 )][i/(n/3)] = arr[i] ;
	}

	for( int i = 0; i<n/3; i++ )
	{
		if( ar[i][0]>=ar[i][1]||ar[i][1]>=ar[i][2] )		possible = 0 ;
		if( ar[i][2]%ar[i][1]!=0||ar[i][1]%ar[i][0]!=0 )	possible = 0 ;
	}
	if( possible )
	{
		for( int i = 0; i<n/3; i++ )
		{
			cout<<ar[i][0]<<" "<<ar[i][1]<<" "<<ar[i][2]<<endl ;
		}
	}
	else cout<<-1 ;

	return 0 ;
}