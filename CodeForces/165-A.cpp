#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfPoints, x[200], y[200], numberOfSupercentral = 0, upperFound, belowFound, leftFound, rightFound ;
	cin>>numberOfPoints ;
	for( int i = 0; i<numberOfPoints; i++ )
	{
		cin>>x[i]>>y[i] ;
	}

	for( int i = 0; i<numberOfPoints; i++ )
	{
		upperFound = belowFound = leftFound = rightFound = 0 ;

		for( int j = 0 ; j<numberOfPoints; j++ )
		{
			if( x[i]==x[j]&&y[j]>y[i] )	upperFound = 1 ;
			if( x[i]==x[j]&&y[j]<y[i] )	belowFound = 1 ;
			if( x[i]>x[j]&&y[j]==y[i] )	leftFound = 1 ;
			if( x[i]<x[j]&&y[j]==y[i] )	rightFound = 1 ;
		}
		if( upperFound&&belowFound&&leftFound&&rightFound )	numberOfSupercentral++ ;
	}

	cout<<numberOfSupercentral ;
    return 0 ;
}