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
	int n,a,b,c,d,s;
	scanf("%d",&n);
	if(n==10000) printf("00001");
	else if(n==1000) printf("0001");
	else if(n==100) printf("001");
	else if(n==10) printf("01");
	else
	{
		if(n/1000>0)
		{
		    a=n%10;
		    b=((n-a)/10)%10;
	 	    c=((n-a-b*10)/100)%10;
		    d=n/1000;
		    s=a*1000+b*100+c*10+d;
			printf("%d",s);
		}
		else
		{
			if(n/100>0)
			{
				a=n%10;
				b=((n-a)/10)%10;
				c=n/100;
				s=a*100+b*10+c;
				printf("%d",s);
			}
			else
			{
				if(n/10>0)
				{
					a=n%10;
					b=n/10;
					s=a*10+b;
					printf("%d",s);
				}
				else printf("%d",n);
			}
		}
	}
	return 0;
}
	
