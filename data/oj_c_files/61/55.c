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
	int *a;
	int n,i;
	int x(int c);
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",x(*(a+i)));
	}
	return 0;

}
int x(int c)
{
	int r;
	if(c==1)
		return 1;
	else if(c==2)
		return 1;
	else
	{
		r=x(c-1)+x(c-2);
		return r;
	}
}