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
	int a[100][16]={0},i=0,j=0,x,y,z,m;
	do
	{j=0;
		do
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==-1) break;
			j++;
		}
		while(a[i][j-1]!=0);
		if(a[i][j]==-1) break;
		else i++;
	}
	while(1==1);
	for(x=0;x<i;x++)
	{
		m=0;
		{for(y=0;a[x][y]!=0;y++)
		{for(z=0;a[x][z]!=0;z++)
			{if (a[x][z]==2*a[x][y]) m++;
			}
		}
		}
		printf("%d\n",m);
	}
}
