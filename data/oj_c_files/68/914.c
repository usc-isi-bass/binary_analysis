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

main()
{
      int i,j,k,m,n;
      int su(int a);
      scanf("%d",&n);
      for(i=6;i<=n;i=i+2)
      {
                         for(j=3;j<=n;j=j+2)
                         {
                                            if(su(j)&&su(i-j))
                                            {printf("%d=%d+%d\n",i,j,i-j);
                                            break;}
                         }
                         }
      
      }
int su(int a)
{
    int i,k;
    k=sqrt(a);
    for(i=3;i<=k;i=i+2)
    if(a%i==0)
    return 0;
    return 1;
    }
