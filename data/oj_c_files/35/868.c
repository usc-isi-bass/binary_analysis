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
	int a[8][8],m,n,p,k,i,j,q,t;
	scanf("%d,%d",&m,&n);
	t=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		p=0;q=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]>a[i][q])
			{
				q=j;
			}
		}
		for(k=0;k<m;k++)
			{
				if(a[k][q]<a[p][q])
					p=k;
			}
		if(p==i)
			{
				t=1;

				printf("%d+%d",p,q);
			}


	}
	if(t==0)
		printf("No");

}