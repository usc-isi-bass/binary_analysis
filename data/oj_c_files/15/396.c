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
	int i,a,b=0,c=0,d=0,n;
	scanf("%d",&n);
	for(i=1;i<=n*n;i++)
	{
		scanf("%d",&a);
		if(a==0){
			b++;
			c++;
			d=b>d?b:d;
		}
		if(a==255)b=0;
	}
	b=(c-2*d)/2;
	printf("%d",b*(d-2));
         return 0;
}
