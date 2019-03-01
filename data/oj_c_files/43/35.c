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


int panduan(int n)
{
	int i,a,k=1;
	a=n/2+1;
	for(i=2;i<a;i++)
	{
		if(n%i==0) k=0;
	}
	return k;
}

void main()
{
	int i,m;
	scanf("%d",&m);
	i=3;
	while (i<m/2+1)
	{
		if (panduan(i)==1&&panduan(m-i)==1) printf("%d %d\n",i,m-i);
		i+=2;
	}
}