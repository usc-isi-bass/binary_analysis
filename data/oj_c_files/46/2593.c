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
	int row,col,i,j,a[100][100],t,k=0,m=1,c,u;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	i=0;
	j=0;
	if(col<row)t=2*col+1;
	else t=2*row;
	u=t;
	for(;t!=1;t--)
	{
		if(t%4==u%4)
		{
			for(c=col-k;c!=0;j++)
			{
				printf("%d\n",a[i][j]);
				c--;
			}
			k++;
			j--;
			i++;
		}
		else if(t%4==(u-1)%4)
		{
			for(c=row-m;c!=0;i++)
			{
			    printf("%d\n",a[i][j]);
				c--;
			}
			m++;
			i--;
			j--;
		}
		else if(t%4==(u-2)%4)
		{
			for(c=col-k;c!=0;j--)
			{
				printf("%d\n",a[i][j]);
				c--;
			}
			k++;
			j++;
			i--;
		}
		else if(t%4==(u-3)%4)
		{
			for(c=row-m;c!=0;i--)
			{
			    printf("%d\n",a[i][j]);
				c--;
			}
			m++;
			i++;
			j++;
		}
	}
}

