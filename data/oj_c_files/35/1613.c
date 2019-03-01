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

int a[10][10];
int main()
{
    int m,n;
    scanf("%d,%d",&m,&n);
    int i,j,t,k,max,min,l=0;
 for (i=0;i<m;i++)
   { for (j=0;j<n;j++)
   scanf("%d",&a[i][j]); }
  for (i=0;i<m;i++)
  { 
   max=a[i][0];k=0;
   for (j=1;j<n;j++)
    if (a[i][j]>max)
    {
     max=a[i][j];k=j;
    }
    min=a[0][k];
    for (t=1;t<m;t++)
     if (a[t][k]<min)
      min=a[t][k];
      if (max==min)
    { printf("%d+%d",i,k);l++;}
  }
  if(l==0)
   printf("No");
   return 0;
}