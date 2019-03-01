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
	int line,row,i,j,a[8][8],max,mline;
	scanf("%d,%d",&line,&row);
	for(i=0;i<=line-1;i++)
		for(j=0;j<=row-1;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<=line-1;i++)
	{
		max=a[i][0];
		mline=0;
		for(j=1;j<=row-1;j++)
			if(a[i][j]>max)
			{
				max=a[i][j];
				mline=j;
			}
		for(j=0;j<=line-1;j++)
			if(a[j][mline]<max)
				break;
		if(j>=line)
			break;
	}
	if(i>=line)
		printf("No");
	else
		printf("%d+%d",i,mline);
	getchar();
	getchar();
}