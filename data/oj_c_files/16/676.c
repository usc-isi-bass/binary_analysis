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
	int n,a,b,c,d;
	scanf("%d",&n);
	if(n/1000!=0){
		a=n/1000;n=n-1000*a;
	b=n/100;n=n-100*b;
	c=n/10;
	d=n-10*c;
	
	printf("%d%d%d%d",d,c,b,a);}
	else if(n/100!=0){
    b=n/100;n=n-100*b;
	c=n/10;
	d=n-10*c;

    printf("%d%d%d",d,c,b);
	}else if(n/10!=0){
	c=n/10;
	d=n-10*c;
	
	printf("%d%d",d,c);}
	else printf("%d\n",n);

}