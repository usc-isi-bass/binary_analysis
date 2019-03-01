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
	int n,b,i,c;
	scanf("%d",&n);
	b=(int) (log(n))+1;
	for(i=1;i<b-1;i++)
	{
		c=n%10;
		n=n/10;
		printf("%d",c);
	}
	return 0;
}