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
	int t,a=3,b=5,c=7;
	scanf("%d",&t);
	if(t%a==0&&t%b==0&&t%c==0)
		printf("%d %d %d",a,b,c);
	else if(t%a==0&&t%b==0)
		printf("%d %d",a,b);
	else if(t%a==0&&t%c==0)
		printf("%d %d",a,c);
	else if(t%b==0&&t%c==0)
		printf("%d %d",b,c);
	else if(t%a==0)
		printf("%d",a);
	else if(t%b==0)
		printf("%d",b);
	else if(t%c==0)
		printf("%d",c);
	else 
		printf("n");
	return 0;
}