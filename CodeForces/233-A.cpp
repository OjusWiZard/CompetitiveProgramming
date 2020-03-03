#include <iostream>

using namespace std;

void print( ) ;
int i   ;

int main()
{
    cin>>i ;
    if (i % 2) {
        cout << "-1";
    } else {
        print();
    }
    return 0;
}

void print( )
{
    int s[100] ;
    for( int j=1 ; j<=i ; j++)
    {
        s[j] = j % 2 ? j + 1 : j - 1 ;
        cout<<s[j]<<' ' ;
    }
}