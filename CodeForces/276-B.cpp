#include <bits/stdc++.h>

using namespace std;

int main()
{
	char s[1000] ;
	int f[26] = {}, odds = 0 ;
	cin>>s ;
	for( int i = 0 ; i<strlen( s ) ; i++ )
	{
		f[s[i]-'a']++ ;
	}
	int j = 0 ;
	for( int i = 0; i<26; i++ )
	{
		if( f[i]%2 )
		{
			odds += f[i] ;
		}
	}

	if( ( odds-1 )%2 && odds!=0 )	cout<<"Second" ;
	else cout<<"First" ;
	
	return 0 ;
}