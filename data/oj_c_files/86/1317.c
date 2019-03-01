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
int n,m,i,j,a[1000],time=0,s=0,temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%d",&m);
 for(j=0;j<=100;j++) a[j]=0;
 for(j=1;j<=m;j++)
 {
  scanf("%d",&temp);
  a[temp]=1;
 }          
 for(j=1;j<=100;j++)
 {
  time++;s++;
  if(a[j]==1) time+=3;
  if(time>=60) break;
 }
 printf("%d\n",s);
 s=0;time=0;
}
scanf("%d",&n);
return 0;
}
