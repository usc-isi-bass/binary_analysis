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
	int n,a[300],i,j,*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a;
	printf("%d",*p);
	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
		{
			if(*(p+i)==*(p+j)) *(p+i)=-32000;
		}
	for(i=1;i<n;i++)
		if(*(p+i)>-32000) printf(",%d",*(p+i));
}
