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
    int m,n,i,j;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
   {
         scanf("%d",&n);
         int a[100],b[100];
         double d[100];
         a[0]=2;b[0]=1;d[0]=(double)a[0]/b[0];
         for(j=1;j<n;j++)
         {
                a[j]=a[j-1]+b[j-1];
                b[j]=a[j-1];
                d[j]=(double)a[j]/b[j];
         }
         double c=0.0000000;
         for(j=0;j<n;j++)
        {
              c=c+d[j];
        }
        printf("%.3lf\n",c);
   }
}
