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
	int a,b,*p,i,j,k;
	p=(int*)malloc(11000*sizeof(int));
	scanf("%d %d",&a,&b);
	for(i=0;i<a*b;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<b;i++)
	{
		k=i;
		j=0;
		while(k>=0&&j<a)
		{
			printf("%d\n",*(p+k+j*b));
			k--;
			j++;
		}
	}
	for(i=1;i<=a;i++)
	{
		k=i;
		j=0;
		while(k<a&&j<b)
		{
			printf("%d\n",*(p+b-1-j+k*b));
			j++;
			k++;
		}
	}
}
