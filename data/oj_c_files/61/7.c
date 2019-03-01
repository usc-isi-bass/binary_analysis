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

int dota(int n)
{
	if(n==1||n==2) return(1);
	else return(dota(n-1)+dota(n-2));
}
main()
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		int m;
		m=dota(a);
		printf("%d\n",m);
	}
}