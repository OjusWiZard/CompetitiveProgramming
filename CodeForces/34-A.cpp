#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfSoldiers, height[100], previousHeight, smallestDifference=1001, index=0 ;
	cin>>numberOfSoldiers ;
	for( int i = 0 ; i<numberOfSoldiers; i++ )
	{
		cin>>height[i] ;
	}
	for( int i = 0; i<numberOfSoldiers; i++ )
	{
		if( i!=0 )
		{
			if( abs( height[i]-height[i-1] )<smallestDifference )
			{
				smallestDifference = abs(height[i]-height[i-1]) ;
				index = i ;
			}
		}
		else
		{
			if( abs( height[0]-height[numberOfSoldiers-1] )<smallestDifference )
			{
				smallestDifference = abs(height[0]-height[numberOfSoldiers-1]) ;
				index = i ;
			}
		}
	}

	if( index==0 ) cout<<numberOfSoldiers<<" "<<1 ;
	else	cout<<index<<" "<<index+1 ;

    return 0 ;
}