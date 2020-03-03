#include <bits/stdc++.h>

using namespace std;

int main()
{
	int apples, weight[100], f1 = 0, f2 = 0 ;
	cin>>apples ;
	for( int i = 0 ; i<apples ; i++ )
	{
		cin>>weight[i] ;
	}
	sort( weight, weight+apples ) ;

	for( int i = apples-1; i>=0; i-- )
	{
		if( f1<=f2 )	f1 += weight[i] ;
		else			f2 += weight[i] ;
	}

	if( f1==f2 ) cout<<"YES" ;
	else	cout<<"NO" ;

	return 0 ;
}