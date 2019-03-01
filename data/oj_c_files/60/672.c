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
    int n,i,j,m,k,o,q;
    scanf("%d",&n);

     if (n<5)
    {
    printf("empty");
    }
    else
    {
        for (i=3;i<=n-2;i++)
    {
        m=(int)sqrt(i);
        for(j=2;j<=m;j++)
       {
        if(i%j==0)
        break;
        }

        if(j==m+1)
        {
            k=i+2;
           {  o=(int)sqrt(k);
            for(q=2;q<=o;q++)
            {
                if(k%q==0)
                break;
            }
            if(q==o+1)
            {
                printf("%d %d\n",i,k);
            }
        }
        }
    }
        }

    return 0;
    }
