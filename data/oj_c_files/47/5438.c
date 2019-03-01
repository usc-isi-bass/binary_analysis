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
	int i,n;
	int a[100];
	scanf("%d",&n);
	int* p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	int* q=a;
	p--;
	int *end=p;
	while(q<=p)
	{
		int temp=*p;
		*p=*q;
		*q=temp;
		q++;
		p--;
	}
	p=a;
	printf("%d",*(p++));
	for(;p<=end;p++)
		printf(" %d",*p);
}