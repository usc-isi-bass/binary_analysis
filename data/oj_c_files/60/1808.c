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
    int n,a,b,c,d,e; 
    n=0;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    scanf("%d",&n);
    for(a=2;a<=n;a++)
    {
                     d=0;
                     c=0;
                     for(b=2;b<a;b++)
                     {
                                      if((a-(a/b)*b)==0) c=100;
                     }
                     if(c==0)
                     {
                                      d=a-2;
                                      {
                                              for(b=2;b<d;b++)
                                              {
                                                              if((d-(d/b)*b)==0) c=100;
                                              }
                                      }
                     }
                     if(d<=2) c=100;
                     if(c==0) 
                     {
                              printf("%d %d\n",d,a);
                              e=100;
                     } 
    }
    if(e==0) printf("empty");
}
