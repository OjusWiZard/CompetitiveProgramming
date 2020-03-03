#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int numberOfHouses, numberOfTasks, houseNumber, currentHouse=1 ;
	long long int timeTaken = 0 ;
	cin>>numberOfHouses>>numberOfTasks ;
	for( long int i = 0; i<numberOfTasks; i++ )
	{
		cin>>houseNumber ;
		if( houseNumber==currentHouse )	continue ;
		if( houseNumber>currentHouse )
		{
			timeTaken += houseNumber-currentHouse ;
		}
		else
		{
			timeTaken += numberOfHouses+houseNumber-currentHouse ;
		}
		currentHouse = houseNumber ;
	}
	cout<<timeTaken ;
    return 0 ;
}