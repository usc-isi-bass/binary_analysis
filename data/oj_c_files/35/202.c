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
	int max,m,n,i,j,y,t,c,d,a[10][10],h,u;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
   u=0;
    for(i=0;i<m;i++)
	{   max=a[i][0];
        y=1;h=0;		for(j=0;j<n;j++)
			if(a[i][j]>max)
		 { h=1;
				max=a[i][j];
		   c=i;d=j;}
			if(h==0) {c=i;d=0;}
		for(t=0;t<m;t++)
			if(a[t][d]<max)
			{
			y=0;
			break;
			}
        if(y==1) {printf("%d+%d",c,d);u=1;}
	}
			if(u==0) printf("No");

}