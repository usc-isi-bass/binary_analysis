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
	int zu[5][5],n,m,h[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&zu[i][j]);
		}
	}
	scanf("%d %d",&n,&m);
	if(n<0||n>4||m<0||m>4) printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			h[0][i]=zu[m][i];
			zu[m][i]=zu[n][i];
			zu[n][i]=h[0][i];
		}
		for(i=0;i<5;i++)
		{
			printf("%d",zu[i][0]);
			for(j=1;j<5;j++)
			{
			printf(" %d",zu[i][j]);	

			}
			printf("\n");
		}
	}

	
	return 0;
}


