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
	int a,b=0,c,i;
	char x;
	
		scanf("%d",&a);
		scanf("%c",&x);
		if(x==44)
		for(i=1;i<=300;i++)
		{
			scanf("%d",&c);
			if(c>a)
			{
				b=a;
				a=c;
			}
			if(c==a)
			{
				a=a;
				b=b;
			}
			if(a>c&&c>=b)
			{
				a=a;
				b=c;
			}
			if(c<b)
			{
				a=a;
				b=b;
			}
		scanf("%c",&x);
		if(x!=44)
			break;
		}
		if(b!=0)
		    printf("%d",b);
		if(b==0)
			printf("No");
		return 0;
} 