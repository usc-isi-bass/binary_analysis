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

void main ()
{
	int m=0,n,k,i=0,j;
	scanf("%d%d",&n,&k);
	loop:i++;
	m=i*n+k;
	for(j=0;j<n-1;j++)
	{
		if(m%(n-1)==0)m=m/(n-1)*n+k;
		else  goto loop;
		if(j==n-2)goto push;
	}
	push:printf("%d\n",m);
}