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

int main(int argc, char* argv[])
{
	int n;
	int a,b,c,d,e;
	scanf("%d",&n);
    a=(int)n/10000;
	b=(int)(n-a*10000)/1000;
	c=(int)(n-a*10000-b*1000)/100;
	d=(int)(n-a*10000-b*1000-c*100)/10;
	e=(int)(n-a*10000-b*1000-c*100-d*10)/1;
	if(a!=0)
	    printf("%d%d%d%d%d\n",e,d,c,b,a);
	if(a==0 && b!=0 && c!=0 && d!=0)
		printf("%d%d%d%d\n",e,d,c,b);
	if(a==0 && b==0 && c!=0 && d!=0)
		printf("%d%d%d\n",e,d,c);
	if(a==0 && b==0 && c==0 && d!=0)
		printf("%d%d\n",e,d);
	if(a==0 && b==0 && c==0 && d==0)
		printf("%d\n",e);
	return 0;
}