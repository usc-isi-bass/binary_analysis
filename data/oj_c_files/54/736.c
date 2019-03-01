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
	int n,k,m,s,t,a=1,b=1;
	scanf("%d %d",&n,&k);
	for(s=0;s<n;s++)
		a=a*n;
	for(t=0;t<n-1;t++)
		b=b*(n-1);
	m=(k+1)*a/b-+k-n*k;
	while((m+k*n-k)%a!=0)
		m=m+1;
	printf("%d",m);
}