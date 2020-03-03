#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x ;
	string heading, text ;
	getline(cin, heading) ;
	getline(cin, text) ;
	bool possible = 1 ;
	
	for( int i = 0 ; i<text.length() ; i++ )
	{
		if( text[i]==' ' )	continue ;
		x = heading.find( text[i] ) ;
		if( x!=-1 )
		{
			heading[x] = ' ' ;
		}
		else
		{
			possible = 0 ;
			//cout<<text[i]<<" not found in "<<heading<<endl ;
			break ;
		}
	}

	if( possible )	cout<<"YES" ;
	else cout<<"NO" ;

	return 0 ;
}