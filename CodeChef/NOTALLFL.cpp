#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ;
	cin>>t ;

	while( t-- )
	{
		int maxLenght=0, cakesIn=0, left=1, right=1, n, k ;
		cin>>n>>k ;
		
		vector<int> lastOcc( k+1, 0 ), as(n+1)  ;
		vector<bool> cakeIn( k+1, false ) ;

		while( right<=n )
		{
			cin>>as[right] ;
			if( cakeIn[as[right]] )
			{
				lastOcc[as[right]] = right ;
			}
			else
			{
				cakesIn++ ;
				lastOcc[as[right]] = right ;
				cakeIn[as[right]] = true ;
				if( cakesIn==k )
				{
					while( lastOcc[as[left]]>left && left<=right )
					{
						left++ ;
					}
					cakeIn[as[left]] = false ;
					left++ ;
					cakesIn-- ;
				}
			}
			right++ ;
			maxLenght = max( maxLenght, right-left ) ;
		}
		cout<<maxLenght<<"\n" ;
	}

	return 0;
}