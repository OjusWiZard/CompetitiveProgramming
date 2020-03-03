#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, numberOfPossibilities=0 ;
	cin>>n>>m ;

	for( int i = 0; i<1000; i++ )
	{
		for( int j = 0; j<1000; j++ )
		{
			if( i*i+j==n&&i+j*j==m )
			{
				numberOfPossibilities++ ;
			}
		}
	}
	cout<<numberOfPossibilities ;
    return 0 ;
}