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

int main ()
{
	int a[5][5]={0},m,n,i,j,p;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	scanf("%d",&n);
	scanf("%d",&m);
	if(n>=0&&n<5&&m>=0&&m<5)
	{
	for(i=0;i<5;i++)
	{
		p=a[n][i];
		a[n][i]=a[m][i];
		a[m][i]=p;
	}
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		printf("%d",a[i][j]);
		if(j==4)
		{
		break;
		}
		printf(" ");
	}
printf("\n");
	}
	}
	else
	{
		printf("error");
	}
	return 0;
}