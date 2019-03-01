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

int main()
{
    int n,k,a=0,b,c=1,i;
    scanf("%d%d",&n,&k);
    while(c)
    {
           a++;
           b=a*n+k;
           for(i=1;i<n;i++)
           {
                            if(b%(n-1)!=0)break;
                            b=b/(n-1)*n+k;
           }
           if(i==n){printf("%d\n",b);return(0);}
    }
}
                            
