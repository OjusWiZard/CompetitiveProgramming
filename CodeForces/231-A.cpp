#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, res=0 ;
    cin>>n ;
    while(n--)
    {
        cin>>a>>b>>c ;
        if(a+b+c>1) res++ ;
    }
    cout<<res ;
    return 0 ;
}