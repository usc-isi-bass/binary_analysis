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
	int x,a,b,c,d,e,i;
	for(i=1;i<7;i++)
	{
		scanf("%d",&x);
		if(x==0||x==-0)
		{
			c=0;
			printf("%d\n",c);
		}
		else if(x>0)
		{
			if(x/10000>0)
			{
				a=x/10000;
				b=(x%10000)/1000;
				c=(x%1000)/100;
				d=(x%100)/10;
				e=x%10;
				printf("%d\n",e*10000+d*1000+c*100+b*10+a);

			}

			else if(x/1000>0)
			{
				a=x/1000;
				b=(x%1000)/100;
				c=(x%100)/10;
				d=x%10;
				printf("%d\n",d*1000+c*100+b*10+a);
			}
				
				
			else if(x/100>0)
			{
				a=x/100;
				b=(x%100)/10;
				c=(x%100)%10;
				printf("%d\n",c*100+b*10+a);
			}
			else if((x/10)>0)
			{
				a=x/10;
				b=x%10;
				printf("%d\n",(b*10+a));
			}
			else if(x/10==0)
				printf("%d\n",x);
		}

		else if(x<0)
		{
			x=-x;
			if(x/10000>0)
			{
				a=x/10000;
				b=(x%10000)/1000;
				c=(x%1000)/100;
				d=(x%100)/10;
				e=x%10;
				printf("%d\n",-(e*10000+d*1000+c*100+b*10+a));

			}
			else if(x/1000>0)
			{
				a=x/1000;
				b=(x%1000)/100;
				c=(x%100)/10;
				d=x%10;
				printf("%d\n",-(d*1000+c*100+b*10+a));
			}
			else if(x/100>0)
			{
				a=x/100;
				b=(x%100)/10;
				c=(x%100)%10;
				printf("%d\n",-(c*100+b*10+a));
			}
			else if((x/10)>0)
			{
				a=x/10;
				b=x%10;
				printf("%d\n",-(b*10+a));
			}
			else if(x/10==0)
				printf("%d\n",-x);
			

			
	
		}
	}
		
		return 0;

}