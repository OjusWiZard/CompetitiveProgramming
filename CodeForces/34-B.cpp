#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfTV, capacity, cost[100] ;
	long int earning=0 ;
	cin>>numberOfTV>>capacity ;
	for( int i = 0; i<numberOfTV; i++ )
	{
		cin>>cost[i] ;
	}
	sort( cost, cost+numberOfTV ) ;
	for( int i = 0; cost[i]<0 && i<capacity ; i++ )
	{
		earning -= cost[i] ;
	}
	cout<<earning ;
    return 0 ;
}