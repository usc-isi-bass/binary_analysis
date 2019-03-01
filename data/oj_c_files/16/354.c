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
	int n,a,b,c;
	scanf("%d",&n);
	b=n;
    do
	{
		a=b%10;
        c=b;
		b=b/10;
        printf("%d",a);
	}
	while(c/10!=0);                                                                                                               
	return 0;
}
