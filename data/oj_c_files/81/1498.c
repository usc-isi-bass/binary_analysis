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
	int change(int,int);
	int a[5][5],i,j,n,m,temp;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	if(change(n,m))
	{
		for(j=0;j<=4;j++)
		{
            temp=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=temp;
		}
        for(i=0;i<=4;i++)
		{
		    for(j=0;j<=4;j++)
			{
		  	    printf("%d",a[i][j]);
				if(j!=4) printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	else printf("error\n");
}
int change(int n,int m)
{
	int flag=0;
	if(n>=0&&n<=4&&m>=0&&m<=4)
	{
		flag=1;
	}
	return(flag);
}