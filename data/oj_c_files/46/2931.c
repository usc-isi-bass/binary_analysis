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

int a[1000][1000];
int x=0,y=0,z=0,i=0,m=0,k=0,t=0,n=0,j=0;
int main()
{
scanf("%d %d",&x,&y);
for(i=0;i<x;i++){
    for(m=0;m<y;m++){
         scanf("%d",&a[i][m]);
    }
}
for (n=0;;n++)
  { 
   for (i=n;i<y-n;i++)
   {
    printf("%d\n",a[n][i]);
    t++;
   }
   printf("\n");
   if(t==x*y)break;
   for (j=n+1;j<x-n;j++)
   {
    printf("%d\n",a[j][y-n-1]);
    t++;
   }
   printf("\n");
   if(t==x*y)break;
   for (i=y-2-n;i>=n;i--)
   {
    printf("%d\n",a[x-n-1][i]);
    t++;
   }
   printf("\n");
   if(t==x*y)break;
   for (j=x-2-n;j>n;j--)
   {
    printf("%d\n",a[j][n]);
    t++;
   }
   printf("\n");
   if(t==x*y)break;
  }
  return 0;
}