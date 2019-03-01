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
	int i,j,k,m,n;
	int*p;
	p=(int*)malloc(200*sizeof(int));
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n/2;i++)
	{
		m=*(p+i);
		*(p+i)=*(p+n-1-i);
		*(p+n-1-i)=m;
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("%d",*(p+n-1));
}
