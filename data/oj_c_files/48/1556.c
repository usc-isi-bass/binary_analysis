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

int m,n;
int a[11][11];int b[11][11];
main ()
{
     int i,j,h;
     memset(a,0,sizeof(int));
     memset(b,0,sizeof(int));
     scanf("%d %d",&m,&n);
     a[5][5]=m;
     for (h=1;h<=n;)
     {
       for (i=0;i<=10;i++)
       {
          for (j=0;j<=10;j++)
          {b[i][j]=a[i][j];}
        }
        for (i=5-h;i<=5+h;i++)
          {
             for (j=5-h;j<=5+h;j++)
             {
                  a[i][j]=b[i-1][j-1]+b[i-1][j]+b[i-1][j+1]+b[i][j-1]+2*b[i][j]+b[i][j+1]+b[i+1][j-1]+b[i+1][j]+b[i+1][j+1];
             }
      }
      h++;
     }
     for (i=1;i<=9;i++)
     {
         for (j=1;j<=8;j++)
         {printf ("%d ",a[i][j]);}
          for (j=9;j<=9;j++)
         {printf ("%d\n",a[i][j]);}
     }
}