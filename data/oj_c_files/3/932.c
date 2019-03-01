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
    int i,j,n,k,f;
	int a[1000];

	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	f=1;

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i!=j)
			    if(a[i]+a[j]==k)
				{
				    f=0;
					break;
				}

	if(f)
		printf("no");
	else
		printf("yes");

	return 0;
}