#include <bits/stdc++.h>

using namespace std;

int main()
{
	string number, isMagicNumber = "YES" ;
	int i ;
	cin>>number ;

	/*for( i = 0; i<number.length()-3;  )
	{
		if( number[i]=='1' )
		{
			if( number[i+1] == '4' )
			{
				if( number[i+2]=='4' )
				{
					if( number[i+3]!='1' )
					{
						isMagicNumber = "NO" ;
						//cout<<i<<"+3 is not 1" ;
						break ;
					}
					else
					{
						isMagicNumber = "YES" ;
						i += 3 ;
					}
				}
				else
				{
					isMagicNumber = "YES" ;
					i += 2 ;
				}
			}
			else
			{
				isMagicNumber = "YES" ;
				i += 1 ;
			}
		}
		else
		{
			isMagicNumber = "NO" ;
			//cout<<i<<" is not 1" ;
			break ;
		}
		//cout<<i<<endl ;
	}
	if( &number[i]!="1" && &number[i]!="14" && &number[i]!="144" ) isMagicNumber = "NO" ;*/

	if( number.find( "444" )!=string::npos || number[0]!='1' )	isMagicNumber = "NO" ;
	for( int i = 0; i<number.length(); i++ )
	{
		if( number[i]!='1'&&number[i]!='4' ) isMagicNumber = "NO" ;
	}
	cout<<isMagicNumber ;
    return 0 ;
}