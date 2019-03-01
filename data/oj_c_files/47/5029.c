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
	int sz[100],dx[100];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		j=n-1-i;
		dx[j]=sz[i];
	}
	for(j=0;j<n-1;j++)
	{

		printf("%d ",dx[j]);
	}
	if(j==n-1)
		printf("%d",dx[j]);
	return 0;
}
