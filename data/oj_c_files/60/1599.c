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

int main(int argc, char* argv[])
{
	int n,i,j,b,c,d=0;
	scanf("%d",&n);
	for(i=2;i<n-1;i++)
	{
		b=1;
		c=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{b=0;}
		}
		for(j=2;j<i+2;j++)
		{
			if((i+2)%j==0)
			{c=0;}
		}
		if((b*c)!=0)
		{printf("%d %d\n",i,i+2);
		d++;}
	}
		if(d==0)
		{printf("empty");}
	return 0;
}