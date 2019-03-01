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
    int n,i,j,k,c;
    int a[21];
    scanf("%d",&n);
    
    for (j=1;j<=n;j++)
    {
      scanf("%d",&k);
      for(i=3;i<=k;i++)
      {
        a[1]=1;
        a[2]=1;                                    
       a[i]=a[i-1]+a[i-2];              
      }        
        c=a[k];
        printf("%d\n",c);        
    }
    getchar();
    getchar();
}
