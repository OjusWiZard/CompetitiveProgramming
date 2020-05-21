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
		int freqLeft[26] = { 0 }, freqRight[26] = { 0 } ;
		cin>>s ;
		for( int i = 0; i<s.size()/2; i++ )
		{
			freqLeft[s[i]-'a']++ ;
		}
		for( int i = s.size()%2 ? ceil(s.size()/2.0):s.size()/2 ; i<s.size(); i++ )
		{
			freqRight[s[i]-'a']++ ;
		}
		bool sabBadhiya = true ;
		for( int i = 0; i<26; i++ )
		{
			if( freqLeft[i]!=freqRight[i] )	sabBadhiya = false ;
		}
		if( sabBadhiya )	cout<<"YES\n" ;
		else				cout<<"NO\n" ;
	}

	return 0 ;
}