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

struct n
{
	int pi;
	struct n * next;
}num[100];
void main()
{
	int a[100],i,n,m;
	struct n *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		num[i].pi=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		num[i].next=&num[i+1];
	}
	num[n-1].next=&num[0];
	p=&num[n-m];
	for(i=0;i<n-1;i++)
	{
		printf("%d ",p->pi);
		p=p->next;
	}
	printf("%d\n",p->pi);
}
