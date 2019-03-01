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
	int j;
	for(j=2;j<x;j++)
	{
		if(x%j==0) break;
	}
	if(j==x) return 1;
	else return 0;
}

int main()
{
	int m,a,b;
	int i,j;
	scanf("%d",&m);
	for(i=3;i<=m-i;i++)
	{
		a=sushu(i);
		b=sushu(m-i);
		if(a==1&&b==1) printf("%d %d\n",i,m-i);
	}

    return 0;
} 