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
	int i,j,a,b,x[10],y[10],countx=0,county=0;
	scanf("%d%d",&a,&b);
    for(i=0;;i++)
	{
		if(i==0) x[i]=a;
		else x[i]=x[i-1]/2;
    	countx++;
	    if(x[i]==1)
		    break;
	}
    for(i=0;;i++)
	{
		if(i==0) y[i]=b;
		else y[i]=y[i-1]/2;
		county++;
		if(y[i]==1)
			break;
	}
	for(i=0;i<countx;i++)
		for(j=0;j<county;j++)
			if(x[i]==y[j])
			{
				printf("%d\n",x[i]);
				return 0;
			}
}