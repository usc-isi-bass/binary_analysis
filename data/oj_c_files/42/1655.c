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
    int n,x;
    int a[N];
    int i,j,num;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&x);

    for(i=0,num=0;i<n-num;i++)
    {
        if(a[i]==x)
        {
            if(i==n-1-num)
            {
                num++;
            }
            else
            {
              for(j=i;j<n-num-1;j++)
              {
                a[j]=a[j+1];
              }
              i--;
              num++;
            }
        }
    }

    for(i=0;i<n-num;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf(" %d",a[i]);
        }
    }

    return 0;
}
