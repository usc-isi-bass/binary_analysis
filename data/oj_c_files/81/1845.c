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
	int n,m,i,j,flag=0;
    int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	
	if(n<5&&m<5)
	{
	
	for(j=0;j<5;j++)
	{int tmp;
	tmp=a[n][j];
		a[n][j]=a[m][j];
		a[m][j]=tmp;
	}
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j==0)
	printf("%d",a[i][j]);
			else printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	}
	else printf("error");

	return 0;
}
