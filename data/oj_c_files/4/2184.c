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
	int *p1[100],*p2,i,j,n,m,s;
	scanf("%d %d",&n,&m);
	for(i=0;i<100;i++)
		p1[i]=(int*)malloc(100*sizeof(int));
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&*(*(p1+i)+j));
		for(s=0;s<n+m-1;s++)
			for(i=0;i<n;i++)
			{
				if(s-i<m)
				printf("%d\n",*(*(p1+i)+s-i));
				if(s-i==0||i==n)
					break;
			}
}
