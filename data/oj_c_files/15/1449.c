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
	int a,n[1000][1000],i,p,x1,y1,x2,y2,s;
	i=0;
	p=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(p=0;p<a;p++)
		{
			scanf("%d",&(n[i][p]));
			
	}
	}
	if((n[0][0]==0)&&(n[1][0]==0)&&(n[0][1])==0)
		{x1=0;
			y1=0;}
	if((n[a-1][a-1]==0&&(n[a-2][a-1]==0)&&(n[a-1][a-2])==0))
	{x2=a-1;
			y2=a-1;

	}
		for(i=1;i<a-1;i++)
	{
		for(p=1;p<a-1;p++)
		{
			if((n[i][p]==0)&&(n[i+1][p]==0)&&(n[i][p+1])==0)
			{x1=i;
			y1=p;}
			if((n[i][p]==0)&&(n[i-1][p]==0)&&(n[i][p-1])==0)
			{x2=i;
			y2=p;}
		}
	}
		s=(x2-x1-1)*(y2-y1-1);
		printf("%d",s);
		return 0;
}