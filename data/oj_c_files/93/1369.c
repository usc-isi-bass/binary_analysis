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
	int m;
	scanf("%d",&m);
	int a=(m%3==0),b=(m%5==0),c=(m%7==0);
	if(a==1&&b==1&&c==1) printf("3 5 7");
	else if(a==1&&b==1&&c!=1) printf("3 5");
	else if(a==1&&b!=1&&c==1) printf("3 7");
	else if(a!=1&&b==1&&c==1) printf("5 7");
	else if(a==1&&b!=1&&c!=1) printf("3");
	else if(a!=1&&b==1&&c!=1) printf("5");
	else if(a!=1&&b!=1&&c==1) printf("7");
	else printf("n");
	return 0;
}