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
int a,b;
scanf("%d %d",&a,&b);
int n[1000][1000];
int i,j;
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
scanf("%d",&n[i][j]);
}
for(int t=0;t<b;t++)
{
for(j=t,i=0;i<a&&j>=0;i++,j--)
printf("%d\n",n[i][j]);
}
for(int p=1;p<a;p++)
{
for(i=p,j=b-1;i<a&&j>=0;i++,j--)
printf("%d\n",n[i][j]);
}
return 0;
}
