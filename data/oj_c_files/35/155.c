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
	int a[8][8],x,y,i,j,b[8],t=0;
	scanf("%d,%d",&x,&y);
	for (i=0;i<x;i++)
	{
		for (j=0;j<y;j++)
			scanf("%d",&a[i][j]);
		b[i]=0;
		for (j=1;j<y;j++)
			if (a[i][b[i]]<a[i][j]) b[i]=j;
	}
	for (i=0;i<x;i++)
	{
		for (j=0;j<x;j++)
			if (a[i][b[i]]>a[j][b[i]]) break;
		if (j==x)
		{
			printf("%d+%d",i,b[i]);
			t=1;
			break;
		}
	}
	if (t==0) printf("No");
}


