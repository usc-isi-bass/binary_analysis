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
	int a[15];
	scanf("%d",&a[0]);
	int i=1;
	int k=0;
	while(a[i-1]!=0)
	{
		scanf("%d",&a[i]);
		k=k+1;
		i++;
	}
	int j;
	int n=0;
	for (i=0;i<=k-1;i++)
	{
		for(j=0;j<=k-1;j++)
		{
			if(a[i]==2*a[j])
			{
				n=n+1;	
			}
		}
	}
    printf("%d",n);
}