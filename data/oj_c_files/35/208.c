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
	int h,l,i,j,t1=0,t=0,p,k,s;
	int a[8][8];
	scanf("%d,%d",&h,&l);
	for(i=0;i<h;i++)
		for(j=0;j<l;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=0,t=0;i<h;i++)
	{
		k=a[i][0];
	
		for(j=1;j<l;j++)
			if(k<a[i][j])
			{
				k=a[i][j];
				p=j;
			}
			s=i;
			
			for(i=0;i<h;i++)
			{
				if(a[i][p]<k)
					t=1;
			}
			if(t==1)break;
			if(t==0)
			{
				printf("%d+%d\n",s,p);
				t1=1;
			}
	}
	if(t1!=1)printf("No");

}
