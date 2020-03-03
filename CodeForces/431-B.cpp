#include <bits/stdc++.h>

using namespace std;

int main()
{
	int g[5][5], totalHappiness=0, max=0 ;
	for( int i = 0; i<5; i++ )
	{
		for( int j = 0; j<5; j++ )
		{
			cin>>g[i][j] ;
		}
	}

	for( int a = 0; a<5; a++ )
	{
		for( int b = 0; b<5; b++ )
		{
			for( int c = 0; c<5; c++ )
			{
				for( int d = 0; d<5; d++ )
				{
					for( int e = 0; e<5; e++ )
					{
						if( a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e )	continue ;
						totalHappiness = 2*g[a][b]+2*g[b][c]+2*g[b][a]+2*g[c][b]+g[c][d]+g[d][e]+g[d][c]+g[e][d] ;
						if( totalHappiness>max )
						{
							max = totalHappiness ;
						}
						//cout<<a+1<<" "<<b+1<<" "<<c+1<<" "<<d+1<<" "<<e+1<<endl ;
					}
				}
			}
		}
	}
	cout<<max ;
	
	return 0 ;
}