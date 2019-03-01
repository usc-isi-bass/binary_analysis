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
	int num,a,b,c,d,e,p;

	scanf("%d",&num);

    if(num>=10000)
	p=5;
	else if(num>=1000)
	     p=4;
	     else if(num>=100)
	     p=3;
	          else if(num>=10)
	         p=2;
	               else 
	               p=1;
	a=(int)(num/10000);
	b=(int)(num%10000/1000);
	c=(int)(num%1000/100);
	d=(int)(num%100/10);
	e=(int)(num%10);


   switch(p)
	{
	case 5:printf("%d%d%d%d%d",e,d,c,b,a);break;

	case 4:printf("%d%d%d%d",e,d,c,b);break;
	case 3:printf("%d%d%d",e,d,c);break;
	case 2:printf("%d%d",e,d);break;
	case 1:printf("%d",e);break;
	
	}
}