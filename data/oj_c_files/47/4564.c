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

int main()
{
	int s[100],n,*p,*q,i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",s+i);
	p=s;
	q=s+n-1;
	while(p<q)
	{
		temp=*p;
		*p=*q;
		*q=temp;
		p++;
		q--;
	}
	for(i=0;i<n-1;i++)
		printf("%d ",*(s+i));
	printf("%d",*(s+n-1));
	return 0;
}