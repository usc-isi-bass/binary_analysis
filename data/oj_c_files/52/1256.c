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
	int n,k,*p,i,*p1;
	int a[100];
	scanf("%d%d",&n,&k);
	for(i=0;i<100;i++)
		a[i]=-1;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p1=a+n-k;
	for(p=p1;*p!=-1;p++)
		printf("%d ",*p);
	for(p=a;p!=p1;p++)
	{
		printf("%d",*p);
		if((p+1)!=p1)
			printf(" ");
	}
}