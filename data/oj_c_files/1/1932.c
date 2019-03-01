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

int sdw(int a,int b)
{
    int i;
    int m=1;
    for(i=a;i<b/2;i++)
    {
                      if(b%i==0)
                      {
                                if(i<=b/i)
                                m=sdw(i,b/i)+m;
                      }
    }
    return m;
}
int main()
{
    int n,i,p,b;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
                    b=a[i];
                    p=sdw(2,b);
                    printf("%d\n",p);
    }
        return 0;
}