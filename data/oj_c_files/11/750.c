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
	int a,b,c,d=0;
	scanf("%d %d %d",&a,&b,&c);
	if(b>=2) d=d+31; 
	if(b>=3) d=d+28;
	if(b>=4) d=d+31;
	if(b>=5) d=d+30;
	if(b>=6) d=d+31;
	if(b>=7) d=d+30;
	if(b>=8) d=d+31;
	if(b>=9) d=d+31;
	if(b>=10) d=d+30;
	if(b>=11) d=d+31;
	if(b>=12) d=d+31;
	d=d+c;
	if(((a%4==0&&a%100!=0)||(a%400==0))&&b>2)
		d=d+1;
	printf("%d",d);
}
