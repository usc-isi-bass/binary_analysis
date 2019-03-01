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
    int m,a[1000],s=0,i,j;
    scanf("%d",&m);
    for(i=2;i<m;i++)
    {
                    for(j=2;j<=sqrt(i);j++)
                    {
                                           if(i%j==0)
                                           break;
                    }
                    if(j>sqrt(i))
                    {
                        a[s]=i;
                        s=s+1;
                    }
    }
    for(i=0;i<s-1;i++)
    {
                    for(j=s-1;j>=i;j--)
                    {
                                      if(a[i]+a[j]==m)
                                      printf("%d %d\n",a[i],a[j]);
                    }
    }
    getchar();
    getchar();
}

