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
	int a,b,i;
	char c=',';
	a=-1;
	b=1;
	while(c==',')
	{
		scanf("%d%c",&i,&c);
		if(i>a)
		{
			b=a;
			a=i;
		}
		else if((i<a)&&(i>b))
			b=i;
	}
	if(b==-1)
		printf("No\n");
	else
		printf("%d\n",b);
	return 0;
}