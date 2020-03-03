#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n, k ;
	cin>>n ;
	
	k = 2*n ;
	while( k-- )	cout<<" " ;
	cout<<0<<endl ;
	for( int i=2*n-2, j=1 ; i>=0 && j<=n ; i-=2, j++ )
	{
		k = i ;
		while( k-- )	cout<<" " ;
		for( int t = 0 ; t<=j ; t++ )	cout<<t<<" " ;
		for( int t = j-1 ; t>0 ; t-- )	cout<<t<<" " ;
		cout<<0<<endl ;
	}
	for( int i=2, j=n-1 ; i<2*n && j>0 ; i+=2, j-- )
	{
		k = i ;
		while( k-- )	cout<<" " ;
		for( int t = 0 ; t<=j ; t++ )	cout<<t<<" " ;
		for( int t = j-1 ; t>0 ; t-- )	cout<<t<<" " ;
		cout<<0<<endl ;
	}
	k = 2*n ;
	while( k-- )	cout<<" " ;
	cout<<0<<endl ;

	return 0 ;
}