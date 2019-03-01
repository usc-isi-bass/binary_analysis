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
	int a,g,s,b,q,o=0,p=1;
	scanf("%d",&a);
	if(a==10000)
		printf("%d%d%d%d%d\n",o,o,o,o,p);
	{
		if(a<=10)
			printf("%d\n",a);
		else if(a<100)
		{
			s=(a%100)/10;
			g=a%10;
			printf("%d%d\n",g,s);
		}
		else if(a<1000)
		{
			b=(a%1000)/100;
			s=(a%100)/10;
			g=a%10;
			printf("%d%d%d\n",g,s,b);
		}
		else if(a<10000)
		{
			q=(a%10000)/1000;
			b=(a%1000)/100;
			s=(a%100)/10;
			g=a%10;
			printf("%d%d%d%d\n",g,s,b,q);
		}
	}
	return 0;
}