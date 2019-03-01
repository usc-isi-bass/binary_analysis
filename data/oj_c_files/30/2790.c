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


/*?7???????*/

int main()
{
	int n, m, a, b, sum;

	scanf("%d", &n);

	sum=0;

	for(a=0;a<=9;a++)
		for(b=0;b<=9;b++)
		{
			m=a*10+b;
			if(m<=n&&a!=7&&b!=7&&(m%7)!=0)
				sum=sum+m*m;
		}

	printf("%d",sum);

	return 0;
}