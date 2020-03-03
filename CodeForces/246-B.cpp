#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, sum=0 ;
	cin>>n ;
	for( int i = 0; i<n; i++ )
	{
		cin>>a ;
		sum += a ;
	}
	sum = abs( sum ) ;
	if( sum%n )	cout<<n-1 ;
	else cout<<max( sum%n, n-( sum%n ) ) ;
	return 0 ;
}