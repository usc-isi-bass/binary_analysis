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
      int i,j,k,a[6][6],m;
      char c;
      m=0;
      for(i=1;i<=5;i++)
      {
           for(j=1;j<=5;j++)
              scanf("%d%c",&a[i][j],&c);
      }
      for(i=1;i<=5;i++)
      {
           for(j=1;j<=5;j++)  
           {
                for(k=1;k<=5;k++)
                {
                   if(k==j) continue;
                   if(a[i][j]<a[i][k]) break;
                }
                if(k!=6) continue;
                
                for(k=1;k<=5;k++)
                {
                   if(k==i) continue;
                   if(a[i][j]>a[k][j]) break;
                }
                if(k==6)
                {printf("%d %d %d",i,j,a[i][j]);m++;break;}
           }
      }
      if(m==0) printf("not found");
}       