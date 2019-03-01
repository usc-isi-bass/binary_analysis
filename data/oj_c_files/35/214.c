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

int rec[10][10];
int m,n;
int i,j,statej,statejj,min,max,flag;
main()
{
	scanf("%d,%d",&m,&n);
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++) scanf("%d",&rec[i][j]);	
	flag=0;
	for(i=1;i<=m;i++)
	{
		max=0;
		for(j=1;j<=n;j++) if (rec[i][j]>max)
		{
			max=rec[i][j];
			statej=j;
		}
		min=32767;
		for(j=1;j<=m;j++) if (rec[j][statej]<min)
		{
			min=rec[j][statej];
			statejj=j;
		}
		if (i==statejj)
		{
			printf("%d+%d\n",i-1,statej-1);
			flag=1;
			break;
		}
	}
	if (flag==0) printf("No\n");

}