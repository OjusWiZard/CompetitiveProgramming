#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, largestSegmentL=1000000000, largestSegmentR=0, leastL=1000000000, largestR=0, l, r, largestSegment=0, largestSegmentPosition ;
	cin>>n ;

	for( int i = 0; i<n; i++ )
	{
		cin>>l>>r ;
		if( l<=leastL )		leastL = l ;
		if( r>=largestR )	largestR = r ;
		if( r-l>=largestSegment )
		{
			largestSegment = r-l ;
			largestSegmentL = l ;
			largestSegmentR = r ;
			largestSegmentPosition = i+1 ;
		}
	}

	if( largestSegmentL<=leastL&&largestSegmentR>=largestR )	cout<<largestSegmentPosition ;
	else	cout<<-1 ;

	return 0 ;
}