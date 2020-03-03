#include <iostream>

using namespace std;

int main()
{
    unsigned long int s[4] ;
    int i, equal=0 ;
    for( i=0 ; i<4 ; i++)   cin>>s[i] ;

    if(
            (s[0]==s[1]) || (s[0]==s[2]) || (s[0]==s[3]) || (s[1]==s[2]) || (s[1]==s[3]) || (s[2]==s[3])
      )     equal=1 ;

    if (
            ((s[0]==s[1]) && (s[1]==s[2])) ||
            ((s[1]==s[2]) && (s[2]==s[3])) ||
            ((s[2]==s[3]) && (s[3]==s[0])) ||
            ((s[3]==s[0]) && (s[0]==s[1])) ||
            ((s[0]==s[2]) && (s[1]==s[3])) ||
            ((s[0]==s[1]) && (s[2]==s[3])) ||
            ((s[0]==s[3]) && (s[1]==s[2]))
       )    equal=2 ;

    if( (s[0]==s[1]) && (s[1]==s[2]) && (s[2]==s[3])) equal=3 ;

    cout<<equal ;
    return 0 ;
}