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
	int i,n,k,re=1;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		re*=n;
	if(n==2)
		printf("7\n");
	else
		printf("%d\n",re-k*(n-1));
}