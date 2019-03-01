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
	int*p,*point,*start,*begin,*temp,i,n,m;
	scanf("%d%d",&n,&m);
	p=(int*)malloc(sizeof(int)*n);
	point=p;
	start=p;
	begin=p;
	for(i=0;i<n;i++,start++)
	{
		scanf("%d",start);
	}
	point+=(n-m);
	temp=point;
	for(;point<start;point++)
	{
		printf("%d ",*point);
	}
	for(;begin<temp-1;begin++)
	{
		printf("%d ",*begin);
	}
	printf("%d",*begin);
	free(p);
	return 0;
}
