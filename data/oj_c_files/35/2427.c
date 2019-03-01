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
	int i,j,k,a[9][9],r,c,e,max,mac,minc;
	scanf("%d,%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
for(i=0;i<r;i++)
	{
		minc=i;
		max=-100;
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
			{  max=a[i][j];
			   mac=j;
			}
			e=1;
			for(k=0;k<r;k++)
			{
				if(a[k][mac]<max)
				{
					e=0;
					break;}
			}
		}
			if(e){
				printf("%d+%d",minc,mac);
			return 0;}
		
	}
		printf("No\n");
			   return 0;
}

