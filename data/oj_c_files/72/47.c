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
   int m,n,a,b,i,j;
   int h[22][22];
   scanf("%d%d",&m,&n);
   for(a=0;a<22;a++)
   {for(b=0;b<22;b++)
      h[a][b]=0;
                    }
      for(i=1;i<m+1;i++)
      {for(j=1;j<n+1;j++)
      {scanf("%d",&h[i][j]);}}
      for(i=1;i<m+1;i++){
                         for(j=1;j<n+1;j++)
                         {if(h[i][j]>=h[i-1][j]&&h[i][j]>=h[i][j-1]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i][j+1])
                         printf("%d %d\n",i-1,j-1);}}
                         return 0;
                         }
                         
      
