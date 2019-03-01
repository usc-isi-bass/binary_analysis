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
    int n,i,a,x,y;
    scanf("%d",&n);
    if(n<5)
    {
           printf("empty");
    }
    else
    {
        for(i=5;i<=n;i++)
        {
                  for(a=2;a<(i-2);a++)
                  {
                                  if(i%a==0||(i-2)%a==0)
                                  break;
                                  if(a==i-3)
                                  {
                                            x=i-2,y=i;
                                            printf("%d %d\n",x,y);
                                  }
                  }
        }                
    }
}