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
	int a[100][2],i,j=0,x=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0;i<n;i++)
	{
		if((a[i][0]>=90)&&(a[i][0]<=140)&&(a[i][1]>=60)&&(a[i][1]<=90))
			j++;
		else
		{
			if(x<j)
				x=j;
			j=0;
		}
		if((i==n-1)&&(a[i][0]>=90)&&(a[i][0]<=140)&&(a[i][1]>=60)&&(a[i][1]<=90)&&(x<j))
			x=j;
	}
	printf("%d\n",x);
}