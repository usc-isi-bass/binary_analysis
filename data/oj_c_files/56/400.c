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

main()
{
	int n,a,b,c,d,l,k;
	scanf("%d",&n);
	if (n<1000000)
	{
	l=n%10;
    d=(n%100-n%10)/10;
	c=(n%1000-n%100)/100;
    b=(n%10000-n%1000)/1000;
	a=(n%100000-n%10000)/10000;
	if (a!=0)
		k=l*1e4+d*1e3+c*1e2+b*1e1+a;
	else if (a==0&&b!=0)
		k=l*1e3+d*1e2+c*1e1+b;
	else if (a==0&&b==0&&c!=0)

		k=l*1e2+d*1e1+c;
	else if (a==0&&b==0&&c==0&&d!=0)
		k=l*1e1+d;
	else if (a==0&&b==0&&c==0&&d==0&&l!=0)
		k=l;
	}
	printf("%d",k);
	return 0;
	
}
