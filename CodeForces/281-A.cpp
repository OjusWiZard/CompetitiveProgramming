#include <iostream>

using namespace std;

int main()
{
    char c[1000];
    cin>>c ;
    if( c[0] >= 'a' ) c[0] -= 32 ;
    cout<<c ;
    return 0;
}