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
	int n,i,m=0;int sushu(int n);
	scanf("%d",&n);
	for(i=3;i<=n;i+=2)
	{
		if(i+2<=n)
		{
			if(sushu(i)+sushu(i+2)==2) {m=1;printf("%d %d\n",i,i+2);}
		}
	}
	if(m==0) printf("empty\n");
}

int sushu(int n)
{
	int c=1,i;
	if(n%2==0) {c=0;return(c);}
	else
	{	for(i=3;i<=sqrt(n)+1;i+=2)
		{
			if(n%i==0) c=0;
		}
	}
	return(c);
}
	