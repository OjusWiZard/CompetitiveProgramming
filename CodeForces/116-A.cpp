#include <iostream>

using namespace std;

int main()
{
    int t, pas, filled=0, max=0 ;
    cin>>t ;
    while(  t-- )
    {
        cin>>pas ;
        filled-=pas ;
        cin>>pas ;
        filled+=pas;
        if( filled > max ) max=filled ;
    }
    cout<<max ;
    return 0 ;
}