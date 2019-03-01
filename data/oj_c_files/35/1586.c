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
	int h,l,i,j,k,b,c,a[8][8],max=-1,min=1000,m=0;
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<h;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				c=j;
			}
		}
	    for(k=0;k<h;k++)
		  {
			  if(a[k][c]<min)
			  {
				  min=a[k][c];
				  b=k;
			  }
		  }
		  
		      if(min==max)
			  {
			    printf("%d+%d",b,c);
			    m++;
			  }
		  
		
	}
	if(m==0)
	{
		printf("No");
	}
	return 0;
}
