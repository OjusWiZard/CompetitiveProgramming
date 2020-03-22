#include <bits/stdc++.h>
using namespace std ;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int n, x=0, y=0 ;
		cin>>n ;
		char s[1001], prevAxis ;
		cin>>s ;
		switch( s[0] )
		{
			case 'L': x-- ; prevAxis = 'X' ; break ;
			case 'R': x++ ;	prevAxis = 'X' ; break ;
			case 'U': y++ ;	prevAxis = 'Y' ; break ;
			case 'D': y-- ;	prevAxis = 'Y' ; break ;
		}
		for( int i = 1; i<n; i++ )
		{
			if( ((s[i]=='L' || s[i]=='R')&&prevAxis=='X') ||( ( s[i]=='U'||s[i]=='D' )&&prevAxis=='Y' ) ) continue ;
			switch( s[i] )
			{
				case 'L': x-- ; prevAxis = 'X' ; break ;
				case 'R': x++ ;	prevAxis = 'X' ; break ;
				case 'U': y++ ;	prevAxis = 'Y' ; break ;
				case 'D': y-- ;	prevAxis = 'Y' ; break ;
			}
		}
		cout<<x<<" "<<y<<"\n" ;
	}

	return 0 ;
}