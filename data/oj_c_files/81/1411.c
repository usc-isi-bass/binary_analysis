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
	int juzhen[5][5];
	int i,j;
	int m,n;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&juzhen[i][j]);
		}
	}
	
	scanf("%d%d",&m,&n);
	
	if(n>=0&&n<5&&m>=0&&m<5)
	{
		int a[5],i;
		for(i=0;i<5;i++)
		{
			a[i]=juzhen[m][i];
			juzhen[m][i]=juzhen[n][i];
			juzhen[n][i]=a[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==4)
					printf("%d",juzhen[i][j]);
				else
					printf("%d ",juzhen[i][j]);
			}
			printf("\n");
		}	
	}
	else
		printf("error");

	return 0;
}