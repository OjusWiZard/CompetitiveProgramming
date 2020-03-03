#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int n, a=0, b=1, c=1, d=2, e=3, iterated=0 ;
	cin>>n ;
	for( long int i=4; e<n; i++ )
	{
		iterated = 1 ;
		e = d+c ;
		a = b ;
		b = c ;
		c = d ;
		d = e ;
	}
	if( iterated )
	{
		cout<<c<<" "<<a<<" "<<b-a ;
	}
	else if( n==3 ) cout<<1<<" "<<1<<" "<<1 ;
	else if( n==2 )	cout<<1<<" "<<1<<" "<<0 ;
	else if( n==1 )	cout<<1<<" "<<0<<" "<<0 ;
	else if( n==0 )	cout<<0<<" "<<0<<" "<<0 ;
    return 0 ;
}