#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100], s2[100] ;
    int res=0 ;
    int i ;
    cin>>s1>>s2 ;
    for( i=strlen(s1) ; i>=0 ; i-- )
    {
        if( s1[i]>='a' )    s1[i] = s1[i] - 32 ;
        if( s2[i]>='a' )    s2[i] = s2[i] - 32 ;

        if(s1[i]>s2[i]) res=1 ;
        else if(s2[i]>s1[i]) res=-1 ;
    }
    cout<<res ;
    return 0 ;
}