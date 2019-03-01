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
	int a,b;
	b=0;
	scanf("%d",&a);
    if(a<9)
	{
		printf("%d",a);
	}
	while(a>9)
	{
      b=(b+a-a/10*10)*10;
       a=a/10;
	}
		printf("%d",b+a);
	return 0;
}