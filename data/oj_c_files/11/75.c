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
	int a,b,c,d,e;
	scanf("%d %d %d",&a,&b,&c);
	d=0;
    int days1[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days2[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if((a % 4 == 0 && a % 100 !=0 ) || a % 400 == 0)
	{
		for(e=0;e<b;e++)
		{
			d=d+days1[e];
		}
		d=d+c;
	}
	else 
	{
        for(e=0;e<b;e++)
		{
			d=d+days2[e];
		}
		d=d+c;
	}
	d=d-1;
	printf("%d",d);
}
