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
	int n,k[300]={99999},i,j,b,p,u=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p);
		b=1;
		for(j=0;j<u;j++)
			if(k[j]==p) {b=0;break;}
			if(b) {k[u]=p;u++;}
	}
	for(j=0;j<u-1;j++)
		printf("%d,",k[j]);
	printf("%d",k[u-1]);
	return 0;
}