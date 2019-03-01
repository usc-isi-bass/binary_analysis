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
	int n;
	scanf("%d",&n);
	int *p,*q,*head;
	p=(int *)calloc(n,sizeof(int));
	head=p;
	for(p=head;p<head+n;p++)
	{
		scanf("%d",p);
	}
	p=head;
	printf("%d",*p);
	p++;
	for(;p<head+n;p++)
	{
		for(q=head;q<p;q++)
		{
			if(*q==*p)
			{
				goto chongfu;
			}
		}
		printf(" %d",*p);
		chongfu:;
	}
	return 0;
}

