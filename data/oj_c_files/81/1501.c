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

int q(int a,int b);
void main()
{
	int x[5][5],a,b,i,j,c[5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&x[i][j]);
		scanf("%d %d",&a,&b);
		if(q(a,b)==0)
			printf("error");
	    if(q(a,b)==1)
		{

       for(j=0;j<5;j++)
		{
			c[j]=x[a][j];
			x[a][j]=x[b][j];
			x[b][j]=c[j];
		}
       for(i=0;i<5;i++)
	   {
		for(j=0;j<4;j++)
		{
			printf("%d ",x[i][j]);
		}
		if(j=4)
		{
			printf("%d",x[i][j]);
		}
		printf("\n");
	   }
		}
}
int q(int a,int b)
{
	int t;
	
	if(a<=4&&b<=4)
		t=1;
    else
		t=0;
	return(t);
}