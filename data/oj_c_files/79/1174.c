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
	int m,n;
	int king(int m,int n);
	while(n!=0&&m!=0)
	{
		scanf("%d %d",&n,&m);
		if(n!=0&&m!=0)
		printf("%d\n",king(m,n)+1);
	}
}

int king(int m,int n)
{
	int i;
	int k=0;
	for(i=2;i<=n;i++)
	k=((m%i)+k)%i;
	return k;
}

