#include <bits/stdc++.h>

using namespace std;

int main()
{
	string gen1, gen2 ;
	char temp ;
	int g1 = -1, g2 = -1 ;

	getline( cin, gen1 ) ;
	getline( cin, gen2 ) ;

	for( int i = 0; i<gen1.length(); i++ )
	{
		if( gen1[i]!=gen2[i] )
		{
			if( g1==-1 )
			{
				g1 = i ;
			}
			else
			{
				g2 = i ;
				break ;
			}
		}
	}

	if( g1!=-1&&g2!=-1 )
	{
		temp = gen2[g1] ;
		gen2[g1] = gen2[g2] ;
		gen2[g2] = temp ;
	}

	if( gen1==gen2 )	cout<<"YES" ;
	else	cout<<"NO" ;

	return 0 ;
}