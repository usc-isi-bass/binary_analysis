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
      int m,q;
      scanf("%d %d",&m,&q);
      int a[m][q] ;
      for(int i=0;i<m;i++)
      for(int t=0;t<q;t++)
      {
      scanf("%d",&a[i][t]);
      }
      int p,n;
      scanf("%d %d",&p,&n);
      int b[p][n] ;
      for(int i=0;i<p;i++)
      for(int t=0;t<n;t++)
      {
      scanf("%d",&b[i][t]);
      }
      int c[m][n];
      for(int i=0;i<m;i++)
      for(int t=0;t<n;t++)
{
      c[i][t]=0;
      for(int s=0;s<p;s++)
      {
        c[i][t]+=(a[i][s]*b[s][t]);
        }
        if(t!=(n-1))
        printf("%d ",c[i][t]);
        else  printf("%d\n",c[i][t]);     
     
      }
 
      }
