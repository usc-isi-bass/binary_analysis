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
	int m[2],i,j,k,a[2][100],p;
	scanf("%d %d",&m[0],&m[1]);
	for (k=0;k<2;k++)
	{
	for (i=0;i<m[k];i++)
	{
		scanf("%d",&a[k][i]);
	}
	}
	for(k=0;k<2;k++)
	{
		for (i=0;i<m[k];i++)
	 {
		for(j=0;j<m[k]-i-1;j++)
		{
			if(a[k][j]>a[k][j+1])
			{
				p=a[k][j];
				a[k][j]=a[k][j+1];
				a[k][j+1]=p;
			}
		}
	 }
	}
	for(k=0;k<2;k++)
	{
		for (i=0;i<m[k];i++)
		{
			if (!(k==0&&i==0))
			{
				printf(" ");
			}
			printf("%d",a[k][i]);
		}
	}
}

	



	
	