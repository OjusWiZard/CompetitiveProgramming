#include <bits/stdc++.h>

using namespace std;


int main()
{
	int strength, numberOfDragons, strengthOfDragon[1000], bonusOfDragon[1000] ;
	bool possibility=1 ;
	cin>>strength>>numberOfDragons ;
	for( int i = 0; i<numberOfDragons; i++ )
	{
		cin>>strengthOfDragon[i]>>bonusOfDragon[i] ;
	}
	for( int i = numberOfDragons-1 ; i>0 ; i-- )
	{
		for( int j = 1 ; j<=i ; j++ )
		{
			if( strengthOfDragon[j-1]>strengthOfDragon[j] )
			{
				swap( strengthOfDragon[j], strengthOfDragon[j-1] ) ;
				swap( bonusOfDragon[j], bonusOfDragon[j-1] ) ;
			}
		}
	}
	/*for( int i = 0 ; i<numberOfDragons; i++ )	cout<<strengthOfDragon[i]<<"\t" ;
	cout<<endl ;
	for( int i = 0 ; i<numberOfDragons; i++ )	cout<<bonusOfDragon[i]<<"\t" ;
	cout<<endl ;*/
	for( int i = 0; i<numberOfDragons; i++ )
	{
		if( strength<=strengthOfDragon[i] ) possibility = 0 ;
		else
		{
			strength += bonusOfDragon[i] ;
		}
	}
	
	if( possibility )	cout<<"YES" ;
	else				cout<<"NO" ;

	return 0 ;
}