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
	int a,b,c,d,e,f,k;
	scanf("%d",&k);
		a=k/100;
        k=k%100;
		b=k/50;
		k=k%50;
		c=k/20;
		k=k%20;
		d=k/10;
		k=k%10;
		e=k/5;
		k=k%5;
		f=k;

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	
	return 0;
}