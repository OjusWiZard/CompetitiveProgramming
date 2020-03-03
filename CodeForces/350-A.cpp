#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m, n, minOfIncorrect = 100, maxOfCorrect = 0, minOfCorrect = 100, tl, suitableTL ;
	cin>>n>>m ;

	for( int i = 0; i<n; i++ )
	{
		cin>>tl ;
		if( tl<minOfCorrect )	minOfCorrect = tl ;
		if( tl>maxOfCorrect )	maxOfCorrect = tl ;
	}
	for( int i = 0; i<m; i++ )
	{
		cin>>tl ;
		if( tl<minOfIncorrect )	minOfIncorrect = tl ;
	}


	if( maxOfCorrect>=minOfIncorrect||( minOfIncorrect-1 )<2*minOfCorrect )	cout<<-1 ;
	else cout<<max( 2*minOfCorrect, maxOfCorrect ) ;

	return 0 ;
}