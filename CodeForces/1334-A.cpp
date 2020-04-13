#include<bits/stdc++.h>

using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n ;
		cin>>n ;
		int p, c, prevP, prevC, deltaP, deltaC ;
		bool cool = 1 ;
		cin>>prevP>>prevC ;
		n-- ;
		if( prevC>prevP )	cool = 0 ;
		while( n-- )
		{
			cin>>p>>c ;
			deltaP = p-prevP ;
			deltaC = c-prevC ;
			if( c>p || p<prevP || c<prevC || deltaC>deltaP )	cool = 0 ;
			prevP = p ;
			prevC = c ;
		}
		if( cool )	cout<<"YES\n" ;
		else cout<<"NO\n" ;
	}

	return 0;
}