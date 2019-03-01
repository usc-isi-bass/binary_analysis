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
	int a,b=3,c=5,d=7;
	char n='n';
	scanf("%d",&a);

		if(a%3==0&&a%5==0&&a%7==0)
			printf("%d %d %d",b,c,d);
        if(a%3!=0&&a%5==0&&a%7==0)
			printf("%d %d",c,d);
		if(a%3==0&&a%5!=0&&a%7==0)
			printf("%d %d",b,d);
		if(a%3==0&&a%5==0&&a%7!=0)
			printf("%d %d",b,c);
		if(a%3!=0&&a%5!=0&&a%7==0)
			printf("%d",d);
		if(a%3!=0&&a%5==0&&a%7!=0)
			printf("%d",c);
		if(a%3==0&&a%5!=0&&a%7!=0)
			printf("%d",b);
		if(a%3!=0&&a%5!=0&&a%7!=0)
			printf("%c",n);
		return 0;
	
}
