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


main()
{
	int f(int n);
	int N,i,t=0;
	scanf("%d",&N);
	for(i=2;i<=N-2;i++)
	{
		if(f(i)==1&&f(i+2)==1)
		{
			printf("%d %d\n",i,i+2);
			t=1;
		}
	}
	if(t==0)
		printf("empty\n");
}

int f(int n)
{
	int i,m;
	m=(int)sqrt(n);;
	int t=1;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
			t=0;
	}
	return t;
}