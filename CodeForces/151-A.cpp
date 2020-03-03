#include <iostream>

using namespace std;

int main()
{
    int friends, drink, lime, salt, a, b ;
    cin>>friends ;
    cin>>a>>b ;
    drink = a*b ;
    cin>>a>>b ;
    lime = a*b ;
    cin>>salt ;
    cin>>a>>b ;
    drink = drink / a ;
    salt = salt / b ;
    if( salt<=drink && salt<=lime ) cout<<salt/friends ;
    else if( drink<=salt && drink<=lime ) cout<<drink/friends ;
    else if( lime<=drink && lime<=salt ) cout<<lime/friends ;
    return 0 ;
}