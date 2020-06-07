#include <bits/stdc++.h>

using namespace std;

int main()
{
	/*ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;*/

	int n ;
	cin>>n ;
	char res = ' ', r1=' ', r2=' ', r3=' ', r4=' ' ;

	while( r1==r3 && r2==r4 )
	{
		cout<<n/2<<endl ; cin>>r1 ;
		cout<<n/2<<endl ; cin>>r2 ;
		cout<<n/2<<endl ; cin>>r3 ;
		cout<<n/2<<endl ; cin>>r4 ;
	}

	if( r2==r4 )
	{
		cout<<1<<endl ;
		cin>>res ;
	}

	int l = 1, r = n ;
	while( l<=r )
	{
		cout<<l+(r-l)/2<<endl ;
		cin>>res ;
		if( res=='L' )	r = l+(r-l)/2-1 ;
		else if( res=='G' ) l = l+(r-l)/2+1 ;
		else return 0 ;
		cout<<1<<endl ;
		cin>>res ;
	}

	return 0 ;
}