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
     int n,i,j,m;
     int a[999];
     for(i=0;i<999;i++)
     a[i]=0;
     scanf("%d",&n);     
     for(i=1;i<=n;i++)
     {
          scanf("%d",&m);
          a[0]=1;a[1]=1;
          for(j=2;j<m;j++)
          a[j]=a[j-2]+a[j-1];
          printf("%d\n",a[m-1]);           
     }
} 