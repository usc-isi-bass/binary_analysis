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
	int i,a=0,b=0,c=0;
	scanf("%d",&i);
	if(i%3==0) a=1;
	if(i%5==0) b=1;
	if(i%7==0) c=1;
	if(a&&b&&c) printf("3 5 7");
	if(a&&b&&!c) printf("3 5");
	if(a&&c&&!b) printf("3 7");
	if(!a&&b&&c) printf("5 7");
	if(a&&!b&&!c) printf("3");
	if(!a&&b&&!c) printf("5");
	if(!a&&!b&&c) printf("7");
	if(!a&&!b&&!c) printf("n");
}
