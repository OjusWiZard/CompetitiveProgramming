#include <bits/stdc++.h>

using namespace std;

int main()
{
	int minimum, monthly[12], neededMonths=0, cmsGained=0 ;
	cin>>minimum ;
	for( int i = 0; i<12; i++ )
	{
		cin>>monthly[i] ;
	}

	sort( monthly, monthly+12 ) ;
	for( int i = 11; i>=0 ; i-- )
	{
		if( cmsGained>=minimum )	break ;
		cmsGained += monthly[i] ;
		neededMonths++ ;
	}
	if( cmsGained<minimum ) cout<<-1 ;
	else cout<<neededMonths ;

    return 0 ;
}