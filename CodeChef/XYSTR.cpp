#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		string s ;
		cin>>s ;
		int pairs=0, n=s.length() ;
		bool singleBoy = true, singleGirl = true ;

		int i = 0 ;
		while( i<n-1 )
		{
			if( s[i]!=s[i+1] )
			{
				pairs++ ;
				i += 2 ;
			}
			else i++ ;
		}
		cout<<pairs<<"\n" ;
	}

	return 0 ;
}