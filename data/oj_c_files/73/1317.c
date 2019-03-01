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
	int i,j,st,err;
	int a[5][5];
	int max[5];
	int p[5];
	err=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<5;i++)
	{
		max[i]=a[i][0];
		p[i]=0;
		for(j=1;j<5;j++)
		{
			if(max[i]<a[i][j])
			{
				max[i]=a[i][j];
				p[i]=j;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		st=0;
		for(j=0;j<5;j++)
			if(j!=i)
			{
				if(max[i]>a[j][p[i]])
					st=1;
			}
			if(st==0)
			{
				printf("%d %d %d",i+1,p[i]+1,max[i]);
				err=0;
			}
	}
	if(err==1)
		printf("not found");




	return 0;
}



		
