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
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if ((a%4==0&&a%400==0)||(a%4==0&&a%100!=0))
	{	if(b==1)
			d=c;
		if(b==2)
			d=31+c;
        if(b==3)
			d=31+29+c;
		if(b==4)
			d=31+29+31+c;
		if(b==5)
			d=31+29+31+30+c;
		if(b==6)
			d=31+29+31+30+31+c;
		if(b==7)
			d=31+29+31+30+31+30+c;
		if(b==8)
         d=31+29+31+30+31+30+31+c;
		if(b==9)
d=31+29+31+30+31+30+31+c+31;
		if(b==10)
d=31+29+31+30+31+30+31+c+31+30;
		if(b==11)
			d=31+29+31+30+31+30+31+c+31+30+31;
		if(b==12)
		d=31+29+31+30+31+30+31+c+31+30+31+30;
	
		printf("%d",d);}
		
			else 
			{
        if(b==1)
			d=c;
		if(b==2)
			d=31+c;
        if(b==3)
			d=31+28+c;
		if(b==4)
			d=31+28+31+c;
		if(b==5)
			d=31+28+31+30+c;
		if(b==6)
			d=31+28+31+30+31+c;
		if(b==7)
			d=31+28+31+30+31+30+c;
		if(b==8)
         d=31+28+31+30+31+30+31+c;
		if(b==9)
d=31+28+31+30+31+30+31+c+31;
		if(b==10)
d=31+28+31+30+31+30+31+c+31+30;
		if(b==11)
			d=31+28+31+30+31+30+31+c+31+30+31;
		if(b==12)
		d=31+28+31+30+31+30+31+c+31+30+31+30;
			
		printf("%d",d);
			}
		
		return 0;





			

}
