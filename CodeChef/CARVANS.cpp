#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio( false ) ;
	cin.tie( NULL ) ;

	int t ;
	cin>>t ;
	while( t-- )
	{
		int maxSpeed, cars, goodCars=1 ;
		cin>>cars ;
		cin>>maxSpeed ;
		cars-- ;
		while( cars-- )
		{
			int speed ;
			cin>>speed ;
			if( speed<=maxSpeed )
			{
				goodCars++ ;
				if( speed<maxSpeed )	maxSpeed = speed ;
			}
		}
		cout<<goodCars<<"\n" ;
	}

	return 0 ;
}