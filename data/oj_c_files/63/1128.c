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

int a[128][128],b[128][128],c[128][128]={0};
int main()
{	int i,j,k,x1,y1,x2,y2;
	scanf("%d%d",&x1,&y1);
	for (i=0;i<x1;i++)
		for (j=0;j<y1;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&x2,&y2);
	for (i=0;i<x2;i++)
		for (j=0;j<y2;j++)
			scanf("%d",&b[i][j]);
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2;j++)
		{
			for (k=0;k<y1;k++)
				c[i][j]+=a[i][k]*b[k][j];
			if (j>0) printf(" ");
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}