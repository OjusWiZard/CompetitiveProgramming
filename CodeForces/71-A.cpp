#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t, l ;
    char s[100], out[4] ;
    cin>>t ;
    while( t-- )
    {
        cin>>s ;
        l=strlen(s) ;
        if(l>10 && l!=11)
        {
            out[0] = s[0] ;
            out[1] = (l-2)/10 +48 ;
            out[2] = (l-2)%10 +48 ;
            out[3] = s[l-1] ;
            cout<<out[0]<<out[1]<<out[2]<<out[3]<<endl ;
        }
        else if(l==11)
        {
            out[0] = s[0] ;
            out[1] = '9' ;
            out[2] = s[l-1] ;
            cout<<out[0]<<out[1]<<out[2]<<endl ;
        }
        else cout<<s<<endl ;
    }
    return 0 ;
}