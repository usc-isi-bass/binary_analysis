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

	int x,y,i,j,num1,num2;
	int xline[11],yline[11];


	scanf("%d%d",&x,&y);

	xline[0]=x;
	yline[0]=y;

	i=1;
	while (x>1)
	{
		x=x/2;
        xline[i]=x;
		i=i+1;
	}
    num1=i-1;

	i=1;
	while(y>1)
	{
		y=y/2;
		yline[i]=y;
		i=i+1;
	}
	num2=i-1;

	for(i=0;i<=num1;i++)
	{
		for(j=0;j<=num2;j++)
			if (xline[i]==yline[j])
			{
				printf("%d\n", xline[i]);
				i=num1+1;
			}
	}
}

