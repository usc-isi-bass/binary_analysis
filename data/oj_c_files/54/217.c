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
	int n,k,m,i,x,y;
	scanf("%d %d",&n,&k);
	x=pow(n,n);
	y=pow(n-1,n);
	for(i=1;;i++)
		if((i+k*(n-1))%y==0)
			break;
	m=(i+k*(n-1))/y*x-k*(n-1);
	printf("%d",m);
}
