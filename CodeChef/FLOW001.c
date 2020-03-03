#include<stdio.h>

int main()
{
    int n,a,b, sum   ;
    scanf("%d" , &n)    ;
    while(n--)
    {
        scanf("%d %d" , &a, &b)   ;
        sum = a+b;
        printf("%d\n",sum) ;
    }
 return 0    ;
}