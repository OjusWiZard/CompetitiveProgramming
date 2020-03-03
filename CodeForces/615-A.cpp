#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, bulb[100] = {}, b, yes = 1 ;

    cin>>n>>m ;
    for( int i = 0; i<n; i++ )
    {
        int bs ;
        cin>>bs ;
        for( int j=0 ; j<bs ; j++ )
        {
            cin>>b ;
            bulb[b-1] = 1 ;
        }
    }
    
    for( int i = 0; i<m; i++ )
    {
        if( bulb[i]==0 )
        {
            yes = 0 ;
            //cout<<i<<" " ;
        }
    }

    yes ? cout<<"YES" : cout<<"NO" ;
    return 0;
}