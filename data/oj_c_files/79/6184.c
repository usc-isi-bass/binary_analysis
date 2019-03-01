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
	int m,n,i,x=0;
	do {scanf("%d %d",&n,&m);
	if(m==0&&n==0) break;
	x=1;
	for(i=2;i<=n;i++)
	{
		x=(x+m)%i;
		if(x==0)
			x=x+i;
	}
	printf("%d\n",x);}
	while (0==0);
	return 0;
}
