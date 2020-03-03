#include <bits/stdc++.h>

using namespace std;

int main()
{
	int passengers, planes=1, seats[1000], temp[1000], t ;
	long int max=0, min=0 ;
	cin>>passengers>>planes ;
	for( int i = 0; i<planes; i++ )	cin>>seats[i] ;
	sort( seats, seats+planes ) ;
	t = passengers ;
	for( int i = 0; i<planes; i++ )
	{
		temp[i] = seats[i] ;
	}
	for( int i = 0 ; t ; )
	{
		if( temp[i]==0 )	i++ ;
		else
		{
			min += temp[i] ;
			temp[i]-- ;
			t-- ;
		}
	}
	t = passengers ;
	int i = planes-1 ;
	while( t-- )
	{
		max+= seats[i] ;
		seats[i]-- ;
		i-- ;
		if( i<0 )	i = planes-1 ;
		else if( seats[i]<=seats[i+1] && i+1!=0 )
		{
			i = planes-1 ;
			continue ;
		}
		//for( int j = 0 ; j<planes ; j++ )	cout<<seats[j]<<" " ;
		//cout<<i<<endl ;
	}
	cout<<max<<" "<<min ;
	return 0 ;
}