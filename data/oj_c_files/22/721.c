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
	int a,b,n;
	char c;
	a=0,b=0;

	do{

			scanf("%d",&n);
			scanf("%c",&c);
			if(n>b)
			{
				a=b;
				b=n;}
			else if(n>a&&n<b)
			{
				a=n;}
	}while(c==',');
	if(a==0)
		printf("No\n");
	else
		printf("%d",a);
	return 0;
}
