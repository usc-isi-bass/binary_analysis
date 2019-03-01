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
	int a,b,c,d,e,f;
	scanf("%d",&a);
	if(a>9999)
	{
		
		b=a/10000;
		c=(a/1000)-10*b;
		d=(a/100)-100*b-10*c;
		e=(a/10)-1000*b-100*c-10*d;
		f=a-10000*b-1000*c-100*d-10*e;

		
		printf("%d%d%d%d%d",f,e,d,c,b);
		}
	else
		if(a>999)
			{
			
			c=a/1000;
			d=(a/100)-10*c;
			e=(a/10)-100*c-10*d;
			f=a-1000*c-100*d-10*e;
			
			printf("%d%d%d%d",f,e,d,c);
			}
		else
			if(a>99)
					{
					
					d=a/100;
					e=(a/10)-10*d;
					f=a-100*d-10*e;
					
					printf("%d%d%d",f,e,d);
					}
			else
				if(a>9)
					{
						
						e=(a/10);
						f=a-10*e;
						
						printf("%d%d",f,e);
					}
				else	
					{
						
						
						printf("%d",a);
					}
	
				

return 0;
}