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
	int n,a;
	scanf("%d",&n);
	if(n==0)
             printf("0");
         else 
         while(n)
	{
		a=n%10;
		n=(n-a)/10;
		printf("%d",a);
	}
	return 0;
}
