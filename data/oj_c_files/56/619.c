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
	int a,b,a1,a2,a3,a4,a5;
	scanf("%d",&a);
	a1=a/10000;
	a2=(a-a1*10000)/1000;
	a3=(a-a1*10000-a2*1000)/100;
	a4=(a-a1*10000-a2*1000-a3*100)/10;
	a5=a-a1*10000-a2*1000-a3*100-a4*10;
	if(a1==0&&a2==0&&a3==0&&a4==0&&a5>0)
	b=a5;
	else if(a1==0&&a2==0&&a3==0&&a4>0&&a5>0)
	b=a5*10+a4;
	else if(a1==0&&a2==0&&a3>0&&a4>0&&a5>0)
	b=a5*100+a4*10+a3;
	else if(a1==0&&a2>0&&a3>0&&a4>0&&a5>0)
	b=a5*1000+a4*100+a3*10+a2;
	else {b=a5*10000+a4*1000+a3*100+a2*10+a1;}
	printf("%d",b);
}
