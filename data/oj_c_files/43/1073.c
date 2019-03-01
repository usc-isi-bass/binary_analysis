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
	int m,n,t,l,i,j;
	scanf("%d",&m);
	for(i=2;i<=m/2;i++)
	{
		t=1;
		l=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				t=-1;
				break;
			}
		}
		if(t==1&&i%2!=0)
		{
			n=m-i;
			for(j=2;j<=n/2;j++)
			{
				if(n%j==0)
				{
					l=-1;
					break;
				}
			}
			if(l==1&&l%2!=0)
				printf("%d %d\n",i,n);
		}
	}
	return 0;
}