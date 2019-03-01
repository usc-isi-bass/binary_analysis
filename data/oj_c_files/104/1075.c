#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int work( int m,int n )
{    while ( m != n )   
       { if( m > n ) m /= 2;
        if( m < n  ) n /= 2;
        }
        printf("%d",m);
     
} 
int main()
{   int a , b,m;
    scanf("%d %d",&a,&b);
    work(a,b);

}
