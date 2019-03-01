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


int main(){
	int w,a=0,b,c,d;
	scanf("%d",&w);
	static int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i<13;i++)
	{	a=a+p[i];
		b=a+12;
		c=b%7;
		d=w+c;
		if(d%7==5)
			printf("%d\n",i+1);
	}	
	return 0;
}	
