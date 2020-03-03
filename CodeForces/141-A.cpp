#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char n1[100], n2[100], pile[200] ;
    int c[26], anotherc[26], i=26, yes=1 ;
    while( i-- )
    {
        c[i] = 0 ;
        anotherc[i] = 0 ;
    }
    cin>>n1 ;
    cin>>n2 ;
    cin>>pile ;
    for( i=0 ; i<strlen(n1)   ; i++ )        c[  n1[i] - 65 ]++ ;
    //for( i=0 ; i<26 ; i++ ) cout<<c[i]<<" " ;
    //cout<<endl ;
    for( i=0 ; i<strlen(n2)   ; i++ )        c[  n2[i] - 65 ]++ ;
    //for( i=0 ; i<26 ; i++ ) cout<<c[i]<<" " ;
    //cout<<endl ;
    for( i=0 ; i<strlen(pile) ; i++ ) anotherc[pile[i] - 65 ]++ ;
    //for( i=0 ; i<26 ; i++ ) cout<<c[i]<<" " ;
    //cout<<endl ;
    for( i=0 ; i<26 ; i++ ) if( c[i]!=anotherc[i] ) yes=0 ;
    if( yes ) cout<<"YES" ;
    else      cout<<"NO" ;
    return 0 ;
}