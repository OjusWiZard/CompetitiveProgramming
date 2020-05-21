#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n ;
    cin>>n ;
    struct nums
    {

        bool sabBadhiya = false ;
        bool foundOnce = true ;
        int d = 0 ;
        int last = 0 ;
    };
    vector<nums> num( 100001 ) ;
    for( int i = 1; i<=n; i++ )
    {
        int a ;
        cin>>a ;
        if( num[a].last==0 )
        {
            num[a].last = i ;
            num[a].sabBadhiya = true ;
        }
        else
        {
            if( num[a].foundOnce )
            {
                num[a].d = i-num[a].last ;
                num[a].last = i ;
                num[a].foundOnce = false ;
            }
            else
            {
                if( num[a].d==i-num[a].last ) num[a].last = i ;
                else num[a].sabBadhiya = false ;
            }
        }
    }
    int count = 0 ;
    for( int i = 1; i<=100000; i++ )
    {
        if( num[i].sabBadhiya ) count++ ;
    }
    cout<<count<<"\n" ;
    for( int i = 1; i<=100000; i++ )
    {
        if( num[i].sabBadhiya )
        {
            cout<<i<<" "<<num[i].d<<"\n" ;
        }
    }
    return 0 ;
}