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
      int n,i,j;
      int a[20000];
      scanf("%d",&n);
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=1;i<n;i++)
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j]&&a[i]!=0)
                a[i]=0;
        }
        for(i=0;i<n;i++)
        {
              if(i==0)
                 printf("%d",a[i]);
                 else
                   {
                       if(a[i]!=0)
                       printf(" %d",a[i]);
                   }
        }
    
}