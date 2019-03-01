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
	int n,i,k,j=0,a[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n;j++)
     	for(i=j+1;i<n;i++)
		{ 
		if((a[j]+a[i])==k)
		{
			printf("yes");
			j=n;
		}
		if(j==n)
			break;
		if(j==n-2)
			printf("no");
		}
	return 0;
}
