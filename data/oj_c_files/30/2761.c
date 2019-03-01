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
    int n;
	int result=0;
	scanf("%d",&n);	
	for(;n>0;n--)
	{
		if(!(n%7==0 || n%10==7 || (9>= n-70 && n-70>=0)))
			result+= n * n;
	}
	printf("%d",result);
	return 0;
}
