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
	scanf("%d",&a);
		if(a<10)
			printf("%d",a);
		else
			if(a>=10&&a<100){
                b=a/10+(a-a/10)*10;
			printf("%d",b);
			}
			else
				if(a>=100&&a<1000){
				c=a/100+(a/10-(a/100)*10)*10+(a-(a/10)*10)*100;
			printf("%d",c);
				}
			else
				if(a>=1000&&a<10000){
				d=a/1000+(a/100-(a/1000)*10)*10+(a/10-(a/100)*10)*100+(a-(a/10)*10)*1000;
			printf("%d",d);
				}
            else
			    if(a>=10000){
				e=a/10000+(a/1000-(a/10000)*10)*10+(a/100-(a/1000)*10)*100+(a/10-(a/100)*10)*1000+(a-(a/10)*10)*10000;
            printf("%d",e);
			}
	return 0;
}

