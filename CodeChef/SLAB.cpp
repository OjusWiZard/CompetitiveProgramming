#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    long int n, temp ;
    cin>>t;
    while( t-- )
    {
        cin>>n ;
        temp = n ;
        if( temp>250000 )
        {
            if( temp>=500000 )  n -= 2500*5 ;
            else   n -= ( ( temp/100 )-2500 )*5 ;
        }
        if( temp>500000 )
        {
            if( temp>=750000 )  n -= 2500*10 ;
            else   n -= ( ( temp/100 )-5000 )*10 ;
        }
        if( temp>750000 )
        {
            if( temp>=1000000 )  n -= 2500*15 ;
            else   n -= ( ( temp/100 )-7500 )*15 ;
        }
        if( temp>1000000 )
        {
            if( temp>=1250000 )  n -= 2500*20 ;
            else   n -= ( ( temp/100 )-10000 )*20 ;
        }
        if( temp>1250000 )
        {
            if( temp>=1500000 )  n -= 2500*25 ;
            else   n -= ( ( temp/100 )-12500 )*25 ;
        }
        if( temp>1500000 )
            n -= ( ( temp/100 )-15000 )*30 ;

        cout<<n<<endl ;
    }
    return 0;
}