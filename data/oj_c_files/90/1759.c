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

int sum = 0;  
int work( int a,int b )
{    
     if((a==0)||(a==1)||(b==1)||(b==0))
     return 1;
     if( b>a )
     b = a;
     return( work(a,b-1)+work(a-b,b));
    
}
int main()
{
   int m , n , t , i;
   scanf( "%d",&t );
   for( i = 1 ;i <= t;i++  )
   {scanf("%d%d",&m,&n);
    if( n>=m )
     n=m;
    sum = work( m ,n);
    printf("%d\n",sum);
    sum = 0;
   }      
}
