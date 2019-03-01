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
	int n,i,j,flag;
	int m;
	scanf("%d",&n);
	flag=1;
	for(i=3;i<=n/2;i=i+2)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				flag=-1;
				break;
			}
			flag=1;
		}
		if(flag==1)
		{
			m=n-i;
			for(j=2;j<=m-1;j++)
			{
				if(m%j==0)
				{
					flag=-1;
					break;
				}
				flag=1;
			}
		}
		if(flag==1)
			printf("%d %d\n",i,m);
	}
	return 0;
}