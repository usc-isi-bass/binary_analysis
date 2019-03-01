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
    int n,m,i,j,k=0;
    int a[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     scanf("%d",&m);
     for(i=0;i<n;i++)
      {
          if(a[i]!=m)
          k++;
      }
      for(i=0;i<n;i++)
       {
           if(a[i]!=m)
           {
                printf("%d",a[i]);
                k--;
                if(k>0)
                printf(" ");

           }

       }

}
