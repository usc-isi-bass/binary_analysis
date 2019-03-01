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

int sushu(int x)
{
	int i,sum;
	sum=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
			sum++;
	}
    return sum;
}
int main()
{
	int m,x,num;
	num=0;
	scanf("%d",&m);
	for(x=2;x<=m-2;x++)
	{
		if(sushu(x)+sushu(x+2)==4)
		{
			printf("%d %d\n",x,x+2);
		    num++;
		}
	}
	if(num==0)
	    printf("empty");
    return 0;
}