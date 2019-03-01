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
	int i,m,n,sum,a[10001],*p;
	scanf("%d",&i);
	while(i--){
		scanf("%d%d",&m,&n);
		for(p=a;p<a+m*n;p++)
			scanf("%d",p);
		sum=0;
		for(p=a;p<a+n;p++)
			sum+=*p;
		if(m!=1)
			for(p=a+(m-1)*n;p<a+m*n;p++)
				sum+=*p;
		for(p=a+n;p<a+(m-1)*n;p+=n)
			sum+=*p;
		for(p=a+n*2-1;p<a+m*n-1;p+=n)
			sum+=*p;
		printf("%d\n",sum);
	}
}