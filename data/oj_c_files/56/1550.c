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
	int a;
	scanf("%d",&a);
	if(a/10==0) printf("%d",a);
	else if(a/100==0) {
		int b, c;
		b=a%10; c=a/10; printf("%d%d\n",b,c);
	}
	else if(a/1000==0) {
		int b, c, d;
		b=a%10; c=a/10%10; d=a/100; printf("%d%d%d\n",b,c,d);
	}
	else if(a/10000==0) {
		int b, c, d, e;
		b=a%10; c=a/10%10; d=a/100%10; e=a/1000%10; printf("%d%d%d%d\n",b,c,d,e);
	}
	else if(a/100000==0) {
		int b, c, d, e, f;
		b=a%10; c=a/10%10; d=a/100%10; e=a/1000%10; f=a/10000%10; printf("%d%d%d%d%d\n",b, c, d, e, f);
	}
	else printf("error\n");
}