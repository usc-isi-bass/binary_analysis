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
	int a,b,c,d,e,x,i;
	int l[4],g[4];
	for(i=0;i<4;i++)
	{scanf("%d\n",&x);
	l[i]=x;}
	for(i=0;i<4;i++)
	{x=l[i];
	if(x>=10&&x<100) e=x%10,d=x/10,x=10*e+d;
	if(x>=100&&x<1000) e=x%10,d=((x%100)-e)/10,c=x/100,x=100*e+10*d+c;
	if(x>=1000&&x<10000) e=x%10,d=((x%100)-e)/10,c=((x%1000)-(x%100))/100,b=x/1000,x=1000*e+100*d+10*c+b;
	if(x>=10000) e=x%10,d=((x%100)-e)/10,c=((x%1000)-(x%100))/100,b=((x%10000)-(x%1000))/1000,a=x/10000,x=10000*e+1000*d+100*c+10*b+a;
	g[i]=x;}
	printf("%d\n%d\n%d\n%d\n",g[0],g[1],g[2],g[3]);                                     
}