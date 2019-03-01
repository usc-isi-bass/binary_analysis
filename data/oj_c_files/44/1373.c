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

int fan(int x)
{
    int a=0,b,i;
    int f[100];
    if (x==0)
    return (x);
    else
    {
        for(i=0;i<100;i++)
        {
                          f[i]=x%10;
                          x=x/10;
                          a++;
                          if (x==0)
                          break;
        }
    }
    for(i=0;i<a;i++)
    {
                    x=x*10+f[i];
    }
    return (x);
}
main ()
{
     int c,d,j;
     int g[6];
     for (j=0;j<6;j++)
     {
         scanf("%d",&g[j]);
     }
     for (j=0;j<6;j++)
     {
         c=g[j];
     if (c<0)
     {
             c=c*(-1);
             d=fan (c);
             printf("-%d\n",d);
     }
     else 
     {
          d=fan(c);
          printf("%d\n",d);
     }
     }
     getchar ();
     getchar ();
}
                             
