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

int pure(int a)
{
    int i,m=0,x;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        break;
        m++;
        }
    if(m==a-2)
    x=1;
    else
    x=0;
    return(x);
    }
main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=n-2;i++)
    {
        if(pure(i)+pure(i+2)==2)
        {
            printf("%d %d\n",i,i+2);
            c++;
            }
        }
    if(c==0)
    printf("empty");
    }
