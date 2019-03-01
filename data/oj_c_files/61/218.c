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
	int n, i, b[50];
	int f(int);
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1; i<=n; i++)
	{
		printf("%d\n",f(b[i]));
	}
}
int f(int x)
{
	if(x!=1 && x!=2)
	{
		return(f(x-1)+f(x-2));
	}
	if(x==1 || x==2) return 1;
	return 0;
}