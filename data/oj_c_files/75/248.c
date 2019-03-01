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
	int data[3][1100],n,i,j,max;
	for(n=1;;)
	{
		char c;
		scanf("%d%c",&data[1][n],&c);
		if(c=='\n')
			break;
		n++;
	}
	for(n=1;;)
	{
		char c;
		scanf("%d%c",&data[2][n],&c);
		if(c=='\n')
			break;
		n++;
	}
	printf("%d",n);
	for(j=1,max=0;j<=n;j++)
		if(data[1][j]<=0&&data[2][j]>0)
			max++;
	for(i=1;i<=1000;i++)
	{
		int temp;
		for(j=1,temp=0;j<=n;j++)
			if(data[1][j]<=i&&data[2][j]>i)
				temp++;
		if(max<=temp)
			max=temp;
	}
	printf(" %d",max);
}