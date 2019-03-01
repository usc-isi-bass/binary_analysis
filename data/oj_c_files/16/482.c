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
	int a,b,c,d,f;
	scanf("%d",&a);
	if(a<10&&a>=0)printf("%d",a);
	 else if(a>=10&&a<100)
	 {
		 b=a%10;
	    c=(a-b)/10;
		printf("%.2d",b*10+c);
	}
	 else if(a>99&&a<1000)
	 {
		 b=a%10;
	  c=((a-b)/10)%10; 
	  d=((a-b-c*10)/100)%10;
	  printf("%.3d",b*100+c*10+d);
	 }
	 else	if(a>999&&a<10001)
	 {
		 b=a%10;
	  c=((a-b)/10)%10; 
	  d=((a-b-c*10)/100)%10;
	  f=((a-b-c*10-d*100)/1000)%10;
		  printf("%.4d",b*1000+c*100+d*10+f);
	 }
	 else
	  return 0;
}