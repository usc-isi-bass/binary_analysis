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
		long i,j,k,m,a[17][17],b[100],c[100]={0};
		for (i=1;i<=100;i++)
		{
			scanf("%d",&a[i][1]);
			if  (a[i][1]==-1)
			break;
			else
			{
				for (j=2;j<=100;j++)
				{
				scanf("%d",&a[i][j]);
				if (a[i][j]==0)
				break;
				else  b[i]=j;
				}
			}
	        for (k=1;k<=b[i];k++)
			{
				for (m=1;m<=b[i];m++)
				{
					if (a[i][k]==2*a[i][m])
						c[i]++;
				}
			}
				printf("%d\n",c[i]);
		}


	
}