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

void main ()
{
	int a,b,c,e,f,g,h;
	scanf("%d",&h);
	g=log10(h)+1;
	f=h/10000;
	e=(h-10000*f)/1000;
	c=(h-10000*f-1000*e)/100;
	b=(h-10000*f-1000*e-100*c)/10;
	a=h-10000*f-1000*e-100*c-10*b;
	switch (g)
	{
	case 5:printf("%d%d%d%d%d",a,b,c,e,f);break;
	case 4:printf("%d%d%d%d",a,b,c,e);break;
	case 3:printf("%d%d%d",a,b,c);break;
	case 2:printf("%d%xd",a,b);break;
	case 1:printf("%d",a);
	}
}
