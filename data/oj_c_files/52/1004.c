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

int main(int argc, char* argv[])
{
	int n,m,*p,i;
	scanf("%d%d",&n,&m);
	p=(int*)malloc(2*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		if(i<m)
	    	*(p+i+n)=*(p+n-m+i);
		else
			*(p+i+n)=*(p+i-m);
	}
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		    printf("%d",*(p+n+i));
		else
			printf("%d ",*(p+n+i));
	}

	return 0;
}