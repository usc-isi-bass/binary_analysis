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
	int i,j,k,m,n,*rslt;
	char w1[60],w2[60],*p1,*p2;
	scanf("%s %s",w1,w2);
	p1=w1;
	p2=w2;
	rslt=strstr(p2,p1);
	m=p2;
	n=rslt;
	printf("%d",(n-m));
}