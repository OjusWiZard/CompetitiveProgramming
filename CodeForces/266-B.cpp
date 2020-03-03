#include <iostream>
using namespace std;

int main() {
	char q[128], t[128] ;
	int n, time ;
	scanf("%d %d", &n, &time)  ;
	cin>>q ;
	for( int i=0 ; i<n ; i++)   {
	        t[i] = q[i] ;
	    }
	while(time--)
	{   
	    for( int i=0 ; i<n-1 ; i++ )
	        {
	            if( q[i]=='B' && q[i+1]=='G')   {
	                t[i] = 'G'  ;
	                t[i+1] = 'B'    ;
	            }
	        }
	    for( int i=0 ; i<n ; i++)   {
	        q[i] = t[i] ;
	    }
	}
	cout<<q ;
	return 0;
}