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

main(int)
{
	int n,m,a,b;
	scanf("%d",&n);
	a=n;
	m=0;
	while(a!=0)
	{	b=a%10;a=a/10;
		m=m*10+b;}
		printf("%d",m);
}