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
    int n,i,sum=0,a,b,c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i;
		b=i%10;
		i=i/10;
		c=i%10;
		i=i/10;
		d=i%10;
		if((a%7!=0)&&(b!=7)&&(c!=7)&&(d!=7))
		{
			sum+=a*a;
		}
		i=a;
	}
	printf("%d",sum);
}

