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
	int a[5][5],line[5],row[5],i,j,max,min,loc,t=0;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for (i=0;i<5;i++)
	{
		max=0;
		min=1000000;
		for (j=0;j<5;j++)
			if (a[i][j]>max)
			{
				max=a[i][j];
				loc=j;
			}
		line[i]=loc;
		for (j=0;j<5;j++)
			if (a[j][i]<min)
			{
				min=a[j][i];
				loc=j;
			}
		row[i]=loc;
	}
	for (i=0;i<5;i++)
		if (row[line[i]]==i)
			printf("%d %d %d\n",i+1,line[i]+1,a[i][line[i]]);
		else t++;
	if (t==5) 
		printf("not found\n");
	return 0;
}