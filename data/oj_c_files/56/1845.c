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
	int a,i,n;
	scanf("%d",&a);
	i=1;
	while(i!=0)
	{
		n=a%10;
		i=a/10;
		a=i;
		printf("%d",n);
	}
}
