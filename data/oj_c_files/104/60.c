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
	int m,n;
	scanf("%d%d",&m,&n);
	while(m!=n)
	{
		if(m>n)
			m=m/2;
		else n=n/2;
	}
	printf("%d",m);
	return 0;
}