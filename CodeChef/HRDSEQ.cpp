#include <iostream>
using namespace std ;
int main() {
    int t, number[100], i, n, prev=0, x, count[100] ;
    cin>>t ;
    while(t--)
    {
        cin>>n ;

        for( i=0 ; i<100 ; i++ )
        {
            number[i]=0 ;
            count[i]=0 ;
        }
        count[0]++ ;
        number[0]++ ;
        x=0 ;


        for( i=2 ; i<=n ; i++ )
        {
            if( count[prev]<2 ) x=0 ;
            else                x=i-1 - number[prev] ;

            count[x]++ ;
            number[prev]=i-1 ;
            prev = x ;

            //cout<<x<<" " ;
        }
        cout<<count[x]<<endl ;
    }
    return 0;
}