#include <stdio.h>
#include <math.h>

int main(void) {
	int i, t, d, sum   ;
	int n  ;
	scanf("%d", &t) ;
	while(t--) {
	    scanf("%d\n", &n) ;
	    i=0;
	    while( n!=0)
	    {
	        int d = n%10 ;
	        i+=d ;
	        n=n/10  ;
	    }
	    printf("%d\n", i) ;
	}
	return 0;
} ;

