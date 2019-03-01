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
	int n,i,j;
	int c1[301],c2[300]={0};
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&c1[i]);
	for(i=0;i<=n-1;i++)
		for(j=i+1;j<=n-1;j++)
			if(c1[i]==c1[j])
				c2[j]=1;
	for(i=0;i<=n-1;i++)
		if(c2[i]!=1)
			printf(i==0?"%d":",%d",c1[i]);
}