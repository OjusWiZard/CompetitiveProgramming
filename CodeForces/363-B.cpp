#include <bits/stdc++.h>

using namespace std;

int main()
{
	int numberOfPlanks, pianoSize, heightOfPlanks[150000], minHardness=150000000, plankNumber=0 ;
	cin>>numberOfPlanks>>pianoSize ;

	for( int i = 0; i<numberOfPlanks; i++ )
	{
		cin>>heightOfPlanks[i] ;
	}

	for( int i = 0, sum; i<=numberOfPlanks-pianoSize; i++ )
	{
		if( i==0 )
		{
			sum = 0 ;
			for( int j = 0; j<pianoSize; j++ )
			{
				sum += heightOfPlanks[i+j] ;
			}
		}
		else
		{
			sum -= heightOfPlanks[i-1] ;
			sum += heightOfPlanks[i+pianoSize-1] ;
		}
		if( sum<minHardness )
		{
			minHardness = sum ;
			plankNumber = i ;
		}
	}

	cout<<plankNumber+1 ;

	return 0 ;
}