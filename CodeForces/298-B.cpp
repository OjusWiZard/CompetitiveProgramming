#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, sx, sy, ex, ey, timeTaken=0 ;
	char dir ;

	cin>>t>>sx>>sy>>ex>>ey ;
	timeTaken = t ;
	while( t-- )
	{
		cin>>dir ;
		switch( dir )
		{
			case 'N':	if( ey>sy )
						{
							sy++ ;
							//timeTaken++ ;
						}
						break ;
			case 'S':	if( ey<sy )
						{
							sy-- ;
							//timeTaken++ ;
						}
						break ;
			case 'E':	if( ex>sx )
						{
							sx++ ;
							//timeTaken++ ;
						}
						break ;
			case 'W':	if( ex<sx )
						{
							sx-- ;
							//timeTaken++ ;
						}
						break ;
		}
		if( sx==ex&&sy==ey )	break ;
	}
	if( sx==ex&&sy==ey )	cout<<timeTaken-t ;
	else cout<<-1 ;
	
	return 0 ;
}