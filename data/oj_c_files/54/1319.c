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
	long m,n,k,i,j;
	scanf("%ld%ld",&n,&k);
	for(i=2,j=2,m=n+k;i<=n;i++){
		if(m%(n-1)==0)
			m=m/(n-1)*n+k;
		else{
			m=n*(j++)+k;
			i=1;
		}
	}
	printf("%ld",m);
}