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
	int n,i,a,c,d;
	scanf("%d\n",&n);
	i=1;
	scanf("%d\n",&a);
	c=a;
	while(i<n)
	{	scanf("%d\n",&a);
	if(c<a)
	{
		d=c;
	c=a;
	}
	else
		if(d<a)
		d=a;
	i++;
	}
	printf("%d\n",c);
	printf("%d\n",d);

}
	

 