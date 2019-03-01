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
	int i,n;
	scanf("%d",&n);
	int *renshi=(int *)malloc(sizeof(int)*n);
	memset(renshi,0,sizeof(int)*n);
	int *beiren=(int *)malloc(sizeof(int)*n);
	memset(beiren,0,sizeof(int)*n);
	while(1)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		if(a==0&&b==0)
			break;
		renshi[a]++;
		beiren[b]++;
	}
	for(i=0;i<n;i++)
	{
		if(renshi[i]==0&&beiren[i]==n-1)
		{
			printf("%d\n",i);
			break;
		}
	}
	if(i==n)
		printf("NOT FOUND\n");
}