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
	int n,k,t,m=0;
	scanf("%d %d",&n,&k);
if (n>2)
	{int i=1,p;
	p=1;
	while(i<=n)
	{	p=p*n;
	i++;}
	m=p-k*(n-1);
}
else if(n=2) m=7;
printf("%d",m);
}