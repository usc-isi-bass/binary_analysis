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
	int fb(int a);
    int n,a,m,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%d",&a);
	m=fb(a);
	printf("%d\n",m);}
}

int fb(int a)
{
	int k,sl[20],x;
	sl[1]=1;
	sl[2]=1;
	for(k=3;k<=a;k++)
	{sl[k]=sl[k-2]+sl[k-1];}
	x=sl[a];
	return(x);
}