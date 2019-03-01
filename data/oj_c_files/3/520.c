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
	int n,k,i,j,*pt,flag=1;
	scanf("%d%d",&n,&k);
	pt=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",pt+i);
	for(i=0;i<n-1;i++)
		if(flag)
		for(j=i+1;j<n;j++)
			if((pt[i]+pt[j])==k)
			{
				flag=0;
				break;
			}
			if(flag)
				printf("no\n");
			else
				printf("yes\n");
			free(pt);
}
