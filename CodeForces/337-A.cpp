#include <bits/stdc++.h>

using namespace std;


int main()
{
	int students, puzzles, pieces[50], min=1000 ;
	cin>>students>>puzzles ;
	for( int i = 0; i<puzzles; i++ )	cin>>pieces[i] ;
	sort( pieces, pieces+puzzles ) ;
	//for( int i = 0 ; i<puzzles ; i++ ) cout<<pieces[i]<<" " ;
	//cout<<endl ;
	for( int i = 0 ; i+students-1<puzzles ; i++ )
	{
		if( pieces[i+students-1]-pieces[i]<min )
		{
			min = pieces[i+students-1]-pieces[i] ;
			//cout<<pieces[i]<<" "<<pieces[i+students-1] ;
		}
	}
	//cout<<endl ;
	cout<<min ;

	return 0 ;
}