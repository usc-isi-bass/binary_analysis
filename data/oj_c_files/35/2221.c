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
int i,j,k,n,m,t,a[8][8];
scanf("%d,%d",&m,&n);
for(i=0;i<m;i++)
   for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
for(i=0;i<m;i++)
{
k=0;
t=1;
for(j=1;j<n;j++)
   if(a[i][j]>a[i][k]) k=j;
for(j=0;j<m;j++)
  if(a[j][k]<a[i][k]) {t=0;break;}
if(t) {printf("%d+%d",i,k);exit(0);}
}
printf("No\n");
}