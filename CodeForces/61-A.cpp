#include <iostream>

using namespace std;

int main()
{
    char n1[101], n2[101], res[101] ;
    int i ;
    cin>>n1>>n2 ;
    for( i=0 ; n1[i]=='1'||n1[i]=='0' ; i++)
    {
        res[i] = n1[i]!=n2[i] ? '1' : '0' ;
    }
    res[i]='\0' ;
    cout<<res ;
    return 0;
}