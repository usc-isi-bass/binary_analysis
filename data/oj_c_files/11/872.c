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
	int y,m,d,x=0,i;
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&y);
	scanf("%d",&m);
	scanf("%d",&d);
	if((y%400==0)||(y%100!=0&&y%4==0))
		for(i=0;i<m-1;i++)
			x=x+a[i];
	else
		for(i=0;i<m-1;i++)
			x=x+b[i];
	x=x+d;
	printf("%d",x);
}