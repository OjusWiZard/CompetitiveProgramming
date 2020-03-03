#include <iostream>

using namespace std;

int main()
{
    int t, x=0 ;
    char s[151][3] ;
    cin>>t ;
    while( t-- )
    {
        cin>>s[t] ;
        s[t][1]=='+' ? x++ : x-- ;
    }
    cout<<x ;
    return 0 ;
}