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
	int i,n,k,m=1;
	scanf("%d %d",&n,&k);
	if(n==2)m=3*k+4;
	else {for(i=1;i<=n;i++)m=m*n;
	m=m-(n-1)*k;}
	printf("%d",m);
}