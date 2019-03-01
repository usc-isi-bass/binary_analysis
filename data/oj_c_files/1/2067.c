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

int n,m;
int sum(int x,int y)
{
   int c,i;
   if(x>sqrt(y))
       c=0; 
   else
   {
       if(y%x==0)
       {
           for(i=x,c=1;i<=(y/2)+1;i++)
           {
               if((y/x)%i==0)
                   c=c+sum(i,(y/x));
           }
       }
       else
           c=0;
   } 
   return(c);
}
main()
{
    int i,k,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        k=0;
        scanf("%d",&m);
        for(i=2;i<=(m/2)+1;i++)
            k=k+sum(i,m);
            printf("%d\n",k+1);   
    }
    }
    