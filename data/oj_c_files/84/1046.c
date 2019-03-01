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
	int f[100];
    scanf("%d",&a);
    for (b=1;b<=a;b++)
	{
		scanf("%d",&f[b]);
        if (c<f[b])
		{
		    e=c;
			c=f[b];
            d=e;
		}
		if ((f[b]>d)&&(f[b]<c)) d=f[b];
	}
	printf("%d\n",c);
	printf("%d\n",d);
	return 0;
}