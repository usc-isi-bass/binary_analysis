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
	char x[20],y[20],k,l;
    int n,a,b,c,sum,i,j,max=0,max2=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",x,&a,&b,&k,&l,&c);
	    sum=0;
		if ((a>80) && (c!=0))
			sum=sum+8000;
		if ((a>85) && (b>80))
			sum=sum+4000;
		if (a>90)
			sum=sum+2000;
		if ((a>85) && (l=='Y'))
			sum=sum+1000;
		if ((b>80) && (k=='Y'))
			sum=sum+850;
		if (sum>max)
		{	
			max=sum;
			for(j=0;j<20;j++)
			y[j]=x[j];
		}        
		max2=max2+sum;

	}
	printf("%s\n%d\n%d\n",y,max,max2);
	return 0;
}