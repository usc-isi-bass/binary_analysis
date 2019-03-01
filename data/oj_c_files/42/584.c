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

main()
{
	void move(int *p1, int x);//?p1???x???????
	long a[num],*p,i,j=0,k,n;
	scanf("%ld",&n);
	p=a;
	for (p=a;p<a+n;p++)
	{
		scanf("%ld",p);
	}
	scanf("%ld",&k);
	p=a;
	for (i=0;i<n-j;)
	{
		if (*(p+i)==k)
		{
			move(p+i,n-1-i);
			j++;
		}
		else
			i++;
	}
	for (p=a;p<a+n-j-1;p++)
	{
		printf("%ld ",*p);
	}
	printf("%ld",*p);
}
void move(int *p1, int x)
{
	int *c;
	for (c=p1;c<p1+x;c++)
	{
		*c=*(c+1);
	}
}