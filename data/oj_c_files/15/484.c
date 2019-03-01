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
	int a[100][100],q=0,n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		i=0;
for(j=0;j<n;j++)
		{
			i=0;
			while(a[i][j]!=0&&i<n)
			{
			i++;
			}
			i+=1;
			while(a[i][j]!=0&&i<n)
			{
			i++;
			q++;
			}
		}
printf("%d\n",q);
return 0;
}