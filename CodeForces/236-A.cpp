#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100] ;
    int c[26], i=26, l=0 ;
    while( i-- )  c[i] = 0 ;
    cin>>s ;
    for( i=0 ; i<strlen(s) ; i++)
    {
        c[s[i]-97]++ ;
    }
    for( i=0 ; i<26 ; i++ ) if( c[i] )  l++ ;
    if( l%2 )   cout<<"IGNORE HIM!" ;
    else        cout<<"CHAT WITH HER!" ;
    return 0 ;
}