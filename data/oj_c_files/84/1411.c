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

int main (){
	int i,n,a,b,c,d,e;
	scanf("%d\n%d",&n,&e);
	b=e;
	c=e;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&a);
		if(a>=b) {
			d=b;	
		    b=a;
		if(b>d)	c=d;
		}
		else if(a<b&&a>c) e=a;
		if(e>c) c=e;
	
	}
	printf("%d\n%d\n",b,c);
	return 0;
}