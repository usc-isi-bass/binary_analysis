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
int k;
scanf("%d",&k);
while(k--)
{
int m,n;
scanf("%d %d",&m,&n);
int a[101][101];
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
int sum=0;
for(int i=0;i<m;i++)
sum=sum+a[i][0]+a[i][n-1];
for(int i=1;i<n-1;i++)
sum=sum+a[0][i]+a[m-1][i];
printf("%d\n",sum);
}
return 0;
}