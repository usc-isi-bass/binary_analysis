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
	int n,a,b,c,d,e;
	scanf("%d",&n);
	while(n!=0)
	{
	a=n%10;
	printf("%d",a);
	n=n/10;
	}
	return 0;
}


