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
	int *a,*b,*p,i,j,n,k=0;
	a=LEN;
	b=LEN;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	p=b;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(*(a+i)==*(a+j)) break;
		}
		if(j==i)
		{
			*p++=*(a+i);
			k++;
		}
		else continue;
	}
	p=b;
	for(i=0;i<k-1;i++)
		printf("%d,",*p++);
	printf("%d",*p);
}



