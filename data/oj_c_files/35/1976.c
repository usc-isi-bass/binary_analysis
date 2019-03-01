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
{int m, n, i, j, k;
int a[8][8], t[8], p[8];

scanf("%d,%d",&m,&n);
for(i=0;i<m;i++)
{
	scanf("%d",&a[i][0]);
	t[i]=a[i][0],p[i]=0;
	for(j=1;j<n;j++)
	{
		scanf("%d",&a[i][j]);
		if(a[i][j]>t[i])
		{t[i]=a[i][j],p[i]=j;}
	}
}

k=0;
for(i=0;i<m;i++)
{
	j=0;
	while(a[j][p[i]]>=t[i]&&j<m)
	{j++;}
	if(j==m)
	{printf("%d+%d\n",i,p[i]),k++;}
}
if(k==0)
{printf("No\n");}
return 0;
}