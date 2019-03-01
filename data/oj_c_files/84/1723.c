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
	int n,a,b,c,i;
	scanf("%d\n",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	while(n-2)
	{scanf("%d",&c);
	if(b>a) {if(a>c) {i=b;b=a;a=i;}
	          else {if(b>c) {a=b;b=c;}
			       else a=c;} }
    else {if(b<c) {if(a<c) {b=a;a=c;}
	               else b=c;}}
         n=n-1;
	}
	printf("%d\n",a);
	printf("%d",b);
	return 0;
}
