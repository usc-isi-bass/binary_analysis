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
	char t;
	int i,k,m,a,b;
	scanf("%d",&a);
	b=0;
	m=0;
	while(scanf(",%d",&i))
	{
		if(i>a)
		{
			b=a;
			a=i;
			m=0;
		}
		if(i==a)
			m=1;
		if(i<a&&i>b)
		  b=i;

	}
	if(b==0)
		printf("No");
	if(b>0)
		printf("%d",b);
	
}