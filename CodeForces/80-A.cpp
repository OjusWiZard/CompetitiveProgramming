#include <iostream>

using namespace std;

int main()
{
    int n, m, f ;
    cin>>n>>m ;
    for( int i=n+1 ;  ; i++ )
    {
        f = 0;
        for ( int j=2 ; j<i ; j++ ) if ( i%j == 0 ) f = 1;
        if ( f==0 ) {
            {
                cout << ( i==m ? "YES" : "NO");
                return 0;
            }
        }
    }
}