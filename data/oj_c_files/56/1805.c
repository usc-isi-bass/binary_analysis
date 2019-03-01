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
	int a,d,c,b=10;
	scanf("%d",&a);
	while(c!=0)
	{
	d=b/10;
	c=(a%b-a%d)/d;
	b=b*10;
	if(c!=0)
	printf("%d",c);
	else
	break;
	}
}