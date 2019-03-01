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
	int a,b,c,d,e,f,g,h;
	scanf("%d",&a);
    b=a%10;
	c=(a-b)%100;
	d=(a-b-c)%1000;
    e=(a-b-c-d)/1000;
	f=e%10;
	g=(e-f)/10;
	if(a/10000>=1&&a/10000<10)
	h=10000*b+100*c+d+10*f+g;
	else if(a/1000>=1&&a/1000<10)
        h=1000*b+10*c+d/10+e;
    else if(a/100>=1&&a/100<10)
		h=100*b+c+d/100;
	else if(a/10>=1&&a/10<10)
		h=10*b+c/10;
	else if(a>=1&&a<10)
		h=b;
	printf("%d\n",h);
	return 0;
}
