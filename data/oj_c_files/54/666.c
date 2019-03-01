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


double apple(float n,float k,int x,int m)
{
	double i;
	if(x==n) i=m*n+k;
	else
	i=n*apple(n,k,x+1,m)/(n-1)+k;
	return i;
}
int main()
{
	float num,extra;
	int j=1,i,truth;
	scanf("%f%f",&num,&extra);
	while(1)
	{
		truth=1;
		for(i=num;i>=1;i--)
			if(apple(num,extra,i,j)-(int)apple(num,extra,i,j)!=0)
			{
				truth=0;
				break;
			}
			if(truth==1)
		{
			printf("%d\n",(unsigned)apple(num,extra,1,j));
			return 0;
		}
		j++;
	}
}
