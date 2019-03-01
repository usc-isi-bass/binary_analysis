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
	int a[6][6]={0},j,i,n,m;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
		scanf("%d %d",&n,&m);
		if(n>=0&&n<5&&m>=0&&m<5)
		{
			for(i=0;i<5;i++)
			{
				a[5][i]=a[n][i];
				a[n][i]=a[m][i];
				a[m][i]=a[5][i];
			}
			for(i=0;i<5;i++)
				for(j=0;j<5;j++)
				{
					printf("%d",a[i][j]);
					if(j==4)
						printf("\n");
					else
						printf(" ");
				}
		}
		else printf("error\n");
}