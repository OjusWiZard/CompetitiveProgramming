#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i, numberOfPages, pagesReadable[7] ;
	cin>>numberOfPages ;
	for( int i = 0; i<7; i++ )
	{
		cin>>pagesReadable[i] ;
	}

	for( i = 0 ; numberOfPages>0 ; ++i )
	{
		//cout<<i<<endl ;
		numberOfPages -= pagesReadable[i%7] ;
	}
	cout<<(--i%7)+1 ;
    return 0 ;
}