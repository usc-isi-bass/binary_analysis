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

int a(int,int);
main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",a(max(x,y),min(x,y)));
}
int a(int m,int n)
{
	while(m>n)
	{
		m/=2;
	}
	if(m==n)
		return m;
	else
		return a(n,m);
}
