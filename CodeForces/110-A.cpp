#include <iostream>

using namespace std;

int main()
{
    char n[18] ;
    int ln=0 ;
    cin>>n ;
    for( int i=0 ; i<18 ; i++)
    {
        if( n[i]=='4' || n[i]=='7' ) ln++ ;
    }
    if( ln==4 || ln==7 ) cout<<"YES" ;
    else    cout<<"NO" ;
    return 0;
}