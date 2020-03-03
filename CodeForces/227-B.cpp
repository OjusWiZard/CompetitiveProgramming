#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long int numberOfElements, array[100000] = {}, numberOfQueries, query, indexFromLeft[100000] = {}, indexFromRight[100000] = {} ;
    unsigned long long petya = 0, vasya = 0 ;

    cin>>numberOfElements ;
    for( long int i = 0; i<numberOfElements; i++ )
    {
        cin>>array[i] ;
        indexFromLeft [array[i]-1] = i ;
        indexFromRight[array[i]-1] = numberOfElements-1-i ;
    }
    cin>>numberOfQueries ;
    for( long int i = 0; i<numberOfQueries; i++ )
    {
        cin>>query ;
        vasya += indexFromLeft [query-1]+1 ;
        petya += indexFromRight[query-1]+1 ;
    }

    cout<<vasya<<" "<<petya ;
    return 0 ;
}