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
     int n,m,i,j,k,a[100000]={0},c[100000]={0},b[100000]={0};
     m=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     c[i]=i;
     for(i=0,j=0;;i++,j++)
     {
     scanf("%d %d",&a[i],&b[i]);
     if(a[i]==0&&b[i]==0)
     break;
     }
     for (k=0;k<n;k++)
     {
       for(i=0;i<j;i++)
       {
           if (a[i]==c[k])
           break;
           else if (b[i]==c[k])
           m=m+1;
       }
       if (m==(n-1))
       {
           printf("%d",c[k]);
           break;
       }
       m=0;
     }
}


