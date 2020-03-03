#include <bits/stdc++.h>

using namespace std;

int main()
{
	string string ;
	cin>>string ;
	bool found = 1 ;
	int removed = 0, loops=-1 ;
	vector<int> ommited ;

	while( found )
	{
		found = 0 ;
		loops++ ;
		int left = 0, right = string.length()-1 ;
		while( left<right )
		{
			if( string[left]=='(' )
			{
				if( string[right]==')' )
				{
					found = 1 ;
					ommited.insert( ommited.begin()+(removed/2), left+1+(removed/2) ) ;
					ommited.insert( ommited.end()-(removed/2), right+1+(removed/2) ) ;
					string.erase( string.begin()+right ) ;
					string.erase( string.begin()+left ) ;
					right -= 2 ;
					removed += 2 ;
				}
				else
				{
					right-- ;
				}
			}
			else
			{
				left++ ;
			}
		}
	}

	if( loops==0 )	cout<<0 ;
	else
	{
		cout<<loops<<endl<<removed<<endl ;
		for( int i = 0; i<removed; i++ )	cout<<ommited[i]<<" " ;
	}
	//cout<<string ;

	return 0 ;
}