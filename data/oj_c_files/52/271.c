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

int main(int argc, char* argv[])
{
	int n,m,i,j,k;
	scanf("%d %d",&n,&m);
	int *p,*D;
	p=(int *)malloc(sizeof(int) * n);
	D=(int *)malloc(sizeof(int) * n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	
	for(j=0;j<n;j++)
	{
		if(j<=(m-1))
			D[j]=p[n-m+j];
		if(j>(m-1))
			D[j]=p[j-m];
	}
	
	
	for(k=0;k<n;k++)
	{
		if(k<(n-1))
		printf("%d ",D[k]);
		else
			printf("%d",D[k]);

	}
	
	return 0;
}

