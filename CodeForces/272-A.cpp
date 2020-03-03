#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numberOfFriends, fingersOf[100], possibilities=0, totalFingers=0 ;
    cin>>numberOfFriends ;
    for( int i = 0; i<numberOfFriends; i++ )
    {
        cin>>fingersOf[i] ;
        totalFingers += fingersOf[i] ;
    }

    for( int i = 1; i<=5; i++ )
    {
        if( ( i+totalFingers )%(numberOfFriends+1)!=1 )  possibilities++ ;
    }

    cout<<possibilities ;

    return 0 ;
}