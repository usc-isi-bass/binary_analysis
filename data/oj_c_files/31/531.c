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
	int n=0;
	struct b
	{
		char a[60];
	}d,*q[10000];
	while(1)
	{
		gets(d.a);
		if(d.a[0]=='e')
			break;
		q[n]=(struct b *)malloc(sizeof(struct b));
		*q[n]=d;
		n++;
	}
	while(n--)
	{
		puts(q[n]->a);
	}
}