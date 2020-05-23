#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int n, l, r ;
	cin>>n ;
	if( n==1 )
	{
		cout<<"yes\n1 1" ;
		return 0 ;
	}
	int* a = (int*)malloc( n*sizeof( int ) ) ;
	l = 0 ; r = n-1 ;
	for( int i = 0; i<n; i++ )
	{
		cin>>a[i] ;
	}
	while( a[l]<=a[l+1] )	l++ ;
	while( a[r-1]<=a[r] )	r-- ;

	if( r<=l )
	{
		cout<<"yes\n1 1" ;
		return 0 ;
	}

	bool sorted = true ;
	if( l!=0 )	if( a[l-1]>a[r] )	sorted = false ;
	for( int i = l; i<r; i++ )
	{
		if( a[i]<a[i+1] )	sorted = false ;
	}
	if( r!=n-1 )	if( a[l]>a[r+1] )	sorted = false ;

	if( sorted ) cout<<"yes\n"<<++l<<" "<<++r ;
	else cout<<"no" ;

	return 0 ;
}