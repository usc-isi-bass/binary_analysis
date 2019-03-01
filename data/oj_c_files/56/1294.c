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
	int n,m=0;
	int a,b,c,d,e;
	scanf("%d",&n);
	a=n/10000;
	b=n/1000-a*10;
	c=n/100-a*100-b*10;
	e=n%10;
	d=(n%100-e)/10;
if(a!=0) m=e*10000+d*1000+c*100+b*10+a;
	else{
		if(b!=0) m=e*1000+d*100+c*10+b;
		else{
			if(c!=0) m=e*100+d*10+c;
			else{
				if(b!=0) m=e*10+d;
				else m=e;
			}
		}
	}
	printf("%d",m);

}