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
	int n,a[100000],*p,i,k,*temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(p=a;p<a+n;p++)
		if(*p==k)
		{
			temp=p;
			for(;p<a+n;p++)
				*p=*(p+1);
			n--;
			p=temp-1;
		}
		for(p=a;p<a+n-1;p++)
			printf("%d ",*p);
		printf("%d",*p);
}
