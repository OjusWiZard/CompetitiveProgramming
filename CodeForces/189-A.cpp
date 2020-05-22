#include <bits/stdc++.h>

using namespace std;

int n, a, b, c ;
int DP[4001] = { 0 } ;

int dp( int n )
{
	if( n==0 )	return 0 ;
	if( n<0||(n>0)&&(n<a&&n<b&&n<c) )	return -INT_MAX ;
	if( !DP[n] )	DP[n] = max( dp( n-a ), max( dp( n-b ), dp( n-c ) ) )+1 ;
	return DP[n] ;
}

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	cin>>n>>a>>b>>c ;
	cout<<dp( n ) ;

	return 0 ;
}