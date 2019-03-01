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
	int n,a[10000],i,j,m=0,k,c=0,flag;
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		flag=1;
	for(k=2;k<=i/2&&flag==1;k++)
		if(i%k==0)
			flag=0;
		if (flag==1)
		{
			a[m]=i;
	//		printf("%d",a[m]);
			m++;
		}
	}
	for(i=0;i<m;i++)
		for(j=i;j<m;j++)
		if(a[j]==a[i]+2)
		{
		printf("%d %d\n",a[i],a[j]);
		c++;
		}
		
		if (c==0)
			printf("empty\n");
}

		




		
