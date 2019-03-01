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
	int a[5][5],i,j,n,m;
	int f(int n,int m);
	int b[5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d%d",&n,&m);
	if(f(n,m)==0)
		printf("error\n");
	if(f(n,m)==1)
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
                                    if(j==4)
                                       break;
                                    printf(" ");

			}
			printf("\n");
		}
	}
	return 0;
}
int f(int n,int m)
{
	int z;
	if(n>=0&&n<5&&m>=0&&m<5)
		z=1;
	else 
		z=0;
	return (z);
}
