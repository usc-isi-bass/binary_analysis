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
	int t,a,b,c,d,e;
	scanf("%d",&t);
	a=t/10000;
	b=(t-a*10000)/1000;
	c=(t-a*10000-b*1000)/100;
	d=(t-a*10000-b*1000-c*100)/10;
	e=t-a*10000-b*1000-c*100-d*10;
	if(a==0&&b==0&&c==0&&d==0) printf("%d",e);
	else {
		if(a==0&&b==0&&c==0&&d!=0) printf("%d%d",e,d);
		else{
			if(a==0&&b==0&&c!=0) printf("%d%d%d",e,d,c);
	           else{
				   if(a==0&&b!=0) printf("%d%d%d%d",e,d,c,b);
                    	else
						{
		                   if(a!=0) printf("%d%d%d%d%d",e,d,c,b,a);
						}
			   }
		}
		}
	return 0;
}