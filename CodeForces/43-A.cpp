#include <bits/stdc++.h>

using namespace std;

int main()
{
	string team1Name, team2Name, team ;
	int numberOfGoals=0, team1Score=0, team2Score=0 ;
	cin>>numberOfGoals ;
	numberOfGoals-- ;
	cin>>team1Name ;
	team1Score++ ;

	while( numberOfGoals-- )
	{
		cin>>team ;
		if( team==team1Name )	team1Score++ ;
		else
		{
			team2Name = team ;
			team2Score++ ;
		}
	}

	if( team1Score>team2Score )
	{
		cout<<team1Name ;
	}
	else
	{
		cout<<team2Name ;
	}
	
    return 0 ;
}