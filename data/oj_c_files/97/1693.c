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
	int n,p=0,q=0,r=0;
	scanf("%d",&n);
	p=n/100;
	printf("%d\n",p);
	p=n%100;
	p=p/50;
	printf("%d\n",p);
	p=n%100%50;
	p=p/20;
	printf("%d\n",p);
	p=n%100%50%20;
	p=p/10;
	printf("%d\n",p);
	p=n%100%50%20%10;
	p=p/5;
	printf("%d\n",p);
	p=n%100%50%20%10%5;
	printf("%d",p);
	return 0;
}

