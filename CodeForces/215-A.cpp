#include <bits/stdc++.h>

using namespace std;

int main()
{
	int pedalStars, wheelStars, pedalTeeths[50], wheelTeeths[50], maxRatio = 0, numberOfMax = 0 ; ;
	cin>>pedalStars ;
	for( int i = 0; i<pedalStars; i++ )
	{
		cin>>pedalTeeths[i] ;
	}
	cin>>wheelStars ;
	for( int i = 0; i<wheelStars; i++ )
	{
		cin>>wheelTeeths[i] ;
	}

	for( int i = 0; i<pedalStars; i++ )
	{
		for( int j = 0 ; j<wheelStars ; j++ )
		{
			if( wheelTeeths[j]%pedalTeeths[i]==0 )
			{
				if( wheelTeeths[j]/pedalTeeths[i]>maxRatio )
				{
					numberOfMax = 1 ;
					maxRatio = wheelTeeths[j]/pedalTeeths[i] ;
				}
				else if( wheelTeeths[j]/pedalTeeths[i]==maxRatio )	numberOfMax++ ;
			}
		}
	}

	cout<<numberOfMax ;

    return 0 ;
}