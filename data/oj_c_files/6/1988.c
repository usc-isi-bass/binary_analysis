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
	int a[100][100],n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a[100][100],r,l,sum=0;
		scanf("%d%d",&r,&l);
		for(j=0;j<=r-1;j++)
			for(k=0;k<=l-1;k++)
				scanf("%d",*(a+j)+k);
		for(j=0;j<=r-1;j++)
		{
			for(k=0;k<=l-1;k++)
			{
				if(j==r-1||j==0||k==l-1||k==0)
					sum+=*(*(a+j)+k);
			}
		}printf("%d\n",sum);
	}
	return 0;
}
