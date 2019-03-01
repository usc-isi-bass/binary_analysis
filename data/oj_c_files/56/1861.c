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
	long a,b,c,i,j;
	scanf("%ld",&a);
	c=log(a)/log(10)+1;
	i=pow(10,c);
	j=1;
	b=0;
	while(i>1)
	{
		b=b+(a%i)/(i/10)*j;
		i=i/10;
		j=j*10;
	}
	printf("%ld\n",b);
	return 0;
}