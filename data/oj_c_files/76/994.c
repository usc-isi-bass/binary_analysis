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
struct qujian{
 int x;
 int y;
} sz[50000],e;
 int n;
 scanf("%d",&n);
 int i;
for(i=0;i<n;i++)
 {
 scanf("%d",&sz[i].x);
 scanf("%d",&sz[i].y);
  }
int j,k;
for(k=1;k<=n;k++)
 {
 for(j=0;j<n-k;j++)
   {
   if(sz[j].x>sz[j+1].x)
    {
     e=sz[j+1];
     sz[j+1]=sz[j];
     sz[j]=e;
     }
   }
 }
for(i=0;i<n-1;i++)
 {
   if(sz[i].y>=sz[i+1].y)
    {
      sz[i+1].y=sz[i].y;
      sz[i+1].x=sz[i].x;
     }
   else if(sz[i].y>=sz[i+1].x&&sz[i].y<=sz[i+1].y)
     {
     sz[i+1].x=sz[i].x;
      }
   else if(sz[i].y<sz[i+1].x)
     {
      printf("no");
      return 0;
      }
 }
 if(i==n-1)
  {
  printf("%d %d",sz[n-1].x,sz[n-1].y);
  }
return 0;
}
   
















