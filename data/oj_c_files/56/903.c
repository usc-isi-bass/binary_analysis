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
	int a,n=0,b,i,c;
	scanf("%d",&a);
	b=a;
	while(a>=1)
	{
		a=a/10;
		n=n+1;
	}
	for(i=0;i<n;i++)
	{
		c=b%10;
		printf("%d",c);
		b=(b-b%10)/10;
	}
}