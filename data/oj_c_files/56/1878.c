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
	int a,b,c,d,e,f;
	scanf("%d",&a);
    b=a/10000;
    c=a%10000/1000;
    d=a%1000/100;
    e=a%100/10;
    f=a%10;
    if (b!=0) printf("%d%d%d%d%d\n",f,e,d,c,b);
	else if(c!=0) printf("%d%d%d%d\n",f,e,d,c);
	else if(d!=0) printf("%d%d%d\n",f,e,d);
    else if(e!=0) printf("%d%d\n",f,e);
    else printf("%d\n",f);
}