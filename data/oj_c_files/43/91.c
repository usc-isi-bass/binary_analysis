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

int f(int n)
{
    int m=0;
    int i=2;
    for(;i<n;)
    {
    if(n%i==0)
    break;
    i++;
    }
    {
    if(i==n)
    m=1;
    }   
    return m;
}   
main()
{
    int n,k;
    
    scanf("%d",&n);
    for (int i=3;i<=(n/2);i++)
    {   k=n-i;
        {if (f(i)==1&&f(k)==1)
        printf("%d %d\n",i,k);
        }
    }
    getchar();
    getchar();
    return 0;
}

      
      
