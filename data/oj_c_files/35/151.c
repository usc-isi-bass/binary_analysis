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

void main()
{
	int a[8][8];
	int b=0,c=0,d=0;
	int m,n,i,j,p;
	int max;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{  
		max=a[i][0];
		for(j=1;j<n;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				b=j;
			}
		}
		for(p=0;p<m;p++)
		{
			if(a[i][b]>a[p][b])
				break;
			else
				c++;

		}
		if(c==m)
		{
			d++;
			printf("%d+%d",i,b);
		}
		b=0;c=0;
	}
	if(d==0)
		printf("No");
}
