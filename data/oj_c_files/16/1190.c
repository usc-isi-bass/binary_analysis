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
	int a;
	scanf("%d",&a);
	if(a==10000) printf("%d%d%d%d%d",0,0,0,0,1);
	else if(a>999) printf("%d%d%d%d",a%1000%100%10,a%1000%100/10,a%1000/100,a/1000);
	else if(a>99) printf("%d%d%d",a%100%10,a%100/10,a/100);
	else if(a>9) printf("%d%d",a%10,a/10);
	else printf("%d",a);
	return 0;
}