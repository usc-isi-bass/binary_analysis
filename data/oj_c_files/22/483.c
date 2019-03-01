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

void main()
{
	char k;
	unsigned a,b,x,i,t;
	scanf("%d",&a);
	b=a;
	for(i=1;i<300;i++)
	{if((k=getchar())!=',') break;
	scanf("%d",&x);
	if(x>a) {b=a;a=x;}
	if(x>b&x<a) b=x;
	if(a==b&x<b) b=x;
	}
	if(a==b) printf("No");
	else printf("%d",b);
}