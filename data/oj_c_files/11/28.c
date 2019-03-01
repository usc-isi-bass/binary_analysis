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

int main(int argc, char* argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((a%4==0&&a%100!=0)||a%400==0)
	{
		d[1]++;
	}
	int g=c;
	int i=0;
	while(i>=b)
	{
		d[i]++;
	}
	for(i=0;i<b-1;i++)
	{
		g=g+d[i];
	}
    printf("%d",g);
	return 0;
}
