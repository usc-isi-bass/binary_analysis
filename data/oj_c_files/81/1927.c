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

int main(int argc, char* argv[])
{
	int a[100][100],m,n,i,j,temp;
	for (i=0;i<=4;i++)
		for (j=0;j<=4;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&m,&n);
	if (m<=4&&n<=4&&m!=n)
	{
		for (j=0;j<5;j++)
		{
			temp=a[m][j];
			a[m][j]=a[n][j];
			a[n][j]=temp;
		}
	    for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d",a[i][j]);
			printf("\n");
		}
	}
	else printf("error");
	return 0;
}