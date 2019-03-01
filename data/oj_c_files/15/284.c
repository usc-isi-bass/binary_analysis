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

int main ( )
{
	int n,a,s=1,m,l;long i=0;
	scanf("%d",&n);
	while(1)
	{
		i+=1;
		scanf("%d",&a);
		if(a==0)
			break;
	}
	m=i;
	while(1)
	{
		i+=1;
		scanf("%d",&a);
		if(a==0)
			s+=1;
		if(a!=0)
			break;
	}
	l=i-1;
	while(1)
	{
		i+=1;
		scanf("%d",&a);
		if(a==0)
			s+=1;
		if(i>=n*n)
			break;
	}
	printf("%d\n",((s-(l-m+1)*2)/2)*(l-m-1));

	return 0;
	
}
