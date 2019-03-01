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
	int r,c;
	int i,j,k;
	int (*p)[100];
	p=(int *)malloc(10000*sizeof(int));
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",*(p+i)+j);
	for(k=0;k<=r+c-2;k++)
	{
		for(i=0;i<=k;i++)
			if(i<r&&(k-i)<c)
				printf("%d\n",*(*(p+i)+k-i));
	}
}

