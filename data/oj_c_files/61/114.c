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
	int n,i,j,m,a[100]={0};
	a[1]=a[2]=1;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d",&m);
		if(m==1||m==2)printf("1\n");
		else 
		{
			for(i=3;i<=m;i++)
			{
				a[i]=a[i-1]+a[i-2];
			}
		    printf("%d\n",a[m]);
		}
	}
}
