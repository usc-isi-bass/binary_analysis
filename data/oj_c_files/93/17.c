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
	int m,a,b,c,d,i;
	scanf("%d",&m);
	a=m%3; b=m%5; c=m%7;
	if (a==0&&b==0&&c==0) printf("3 5 7\n");
    else if (a!=0&&b==0&&c==0) printf("5 7\n");
	else if (a==0&&b!=0&&c==0) printf("3 7\n");
	else if (a==0&&b==0&&c!=0) printf("3 5\n");
	else if (a!=0&&b!=0&&c==0) printf("7\n");
    else if (a!=0&&b==0&&c!=0) printf("5\n");
	else if (a==0&&b!=0&&c!=0) printf("3\n");
	else printf("n\n");
}