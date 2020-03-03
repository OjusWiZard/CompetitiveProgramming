#include <bits/stdc++.h>

using namespace std;

int main()
{
	int rows, cols ;
	char cell ;
	cin>>rows>>cols ;
	for( int i = 0 ; i<rows ; i++ )
	{
		for( int j = 0 ; j<cols ; j++ )
		{
			cin>>cell ;
			if( cell=='.' )
			{
				if( ( i+j )%2 )	cout<<"W" ;
				else			cout<<"B" ;
			}
			else cout<<"-" ;
		}
		cout<<endl ;
	}

	return 0 ;
}