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

int num(int a)
{
	int b;
	b=abs(a);
	while(b%10==0){
		b=b/10;
	}
	if(a>0)return b;
	else return -b;
}
int reverse(int b)//???a??keyi
{
	int c=0,d;
	d=abs(b);
	while(d>0){
		c=c*10+d%10;
		d=d/10;
	}
	if(b>0)return c;
	else return -c;
}
int main()
{
	int i=0,x;
	int out[6];
	for(;i<6;i++){
		scanf("%d",&x);
		out[i]=reverse(num(x));
	}
	for(i=0;i<6;i++){

	printf("%d\n",out[i]);
	}
	return 0;
}
	