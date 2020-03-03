#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfPeople, peopleInFront, peoplebehind, possibilities=0, position ;
	cin>>numberOfPeople>>peopleInFront>>peoplebehind ;

	for( position = 1 ; position<=numberOfPeople ; position++ )
	{
		if( position-1>=peopleInFront&&numberOfPeople-position<=peoplebehind )	possibilities++ ;
	}
	cout<<possibilities ;

	return 0 ;
}