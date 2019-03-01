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
	int m=0,n=0,p=0,a;
	scanf("%d",&a);
    if(a%3==0)m=3;
    if(a%5==0)n=5;
	if(a%7==0)p=7;
	if(m+n+p==15)printf("3 5 7");
	else if(m+n+p==8)printf("3 5");
	else if(m+n+p==10)printf("3 7");
	else if(m+n+p==12)printf("5 7");
	else if(m+n+p==3)printf("3");
	else if(m+n+p==5)printf("5");
	else if(m+n+p==7)printf("7");
	else if(m+n+p==0)printf("n"); 


}