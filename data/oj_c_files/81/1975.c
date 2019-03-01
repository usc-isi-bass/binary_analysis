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
	int n,m,a[5][5],flag=0;
	int i,j,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d%d",&n,&m);
		if(n>=0&&n<=4&&m>=0&&m<=4)
			flag=1;
		if(flag==0)
			printf("error\n");
		else
		{
			for(i=0;i<5;i++)
			{k=i;
			if(i==n)k=m;			
			if(i==m)k=n;
			for(j=0;j<4;j++)
				printf("%d ",a[k][j]);
			printf("%d\n",a[k][4]);}
			
		}
		return 0;
		
}