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
    int n;
    int a[N];
    int i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }

        else
        {
            for(j=0;j<i;j++)
            {
                if(a[j]==a[i])
                {
                    break;
                }
            }
            if(j==i)
            {
                printf(" %d",a[i]);
            }
            else if(j<i)
            {
                continue;
            }
        }
    }

    return 0;
}