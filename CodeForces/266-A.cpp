#include <iostream>

using namespace std;

int main()
{
    int n=0, count=0, f=1 ;
    char s[50] ;
    cin>>n>>s ;
    while( f )
    {
        f=0 ;
        for( int i=0 ; i<n ; i++ )
        {
            if( s[i]==s[i+1] )
            {
                for( int j=i+1 ; j<n ; j++ )
                {
                    s[j] = s[j+1] ;
                }
                count++ ;
                n-- ;
                f++ ;
                //cout<<s<<endl ;
            }
        }
    }
    cout<<count ;
    return 0;
}