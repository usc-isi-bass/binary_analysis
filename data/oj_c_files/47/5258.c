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
	int n,a[100],*p,*j,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(p=a,j=a+n-1;p<a+n/2;p++,j--)
	{
		temp=*p;
		*p=*j;
		*j=temp;
	}
	for(p=a;p<a+n-1;p++)
		printf("%d ",*p);
	printf("%d",*p);

}