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
	int n,i,j,t,a[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=0;
		if(i==0) printf("%d",a[0]);
		else
		{
			for(j=0;j<i;j++)
			{
				if(a[i]==a[j]) t=t+1;
			}
			if(t==0) printf(" %d",a[i]);
		}
	}
	return 0;
}