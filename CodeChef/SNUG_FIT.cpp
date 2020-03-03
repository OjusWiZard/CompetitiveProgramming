#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n ;
    long int a[10000], b[10000], temp ;
    long long int dia ;
    cin>>t ;
    while( t-- )
    {
        dia = 0 ;
        cin>>n ;
        for( int i = 0; i<n; i++ )
        {
            cin>>a[i] ;
        }
        for( int i = 0; i<n; i++ )
        {
            cin>>b[i] ;
        }
        
        sort( a, a+n ) ;
        sort( b, b+n ) ;
        for( int i = 0; i<n; i++ )
        {
            a[i]<b[i] ? dia += a[i] : dia += b[i] ;
        }
        cout<<dia<<endl ;
    }
    return 0;
}