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
	int a,b,c,y;
	scanf("%d%d%d",&a,&b,&c);
    if ((a%4==0)&&(a%100!=0))
		{
        if(b==1)
		{
			y=c;
		}
		if(b==2)
		{
			y=31+c;
		}
		if(b==3)
		{
			y=31+29+c;
		}
		if(b==4)
		{
			y=31+29+31+c;
		}
		if(b==5)
		{
			y=31+29+31+30+c;
		}
	    if(b==6)
		{
			y=31+29+31+30+31+c;
		}
		if(b==7)
		{
			y=31+29+31+30+31+30+c;
		}
	 
		if(b==8)
		{
			y=31+29+31+30+31+30+31+c;
		}	
		if(b==9)
		{
			y=31+29+31+30+31+30+31+31+c;
		}
		if(b==10)
		{
			y=31+29+31+30+31+30+31+31+30+c;
		}

        if(b==11)
		{
			y=31+29+31+30+31+30+31+31+30+31+c;
		}

        if(b==12)
		{
			y=31+29+31+30+31+30+31+31+30+31+30+c;
		}
		printf("%d",y);
	}

    else if (a%400==0)
		{
        if(b==1)
		{
			y=c;
		}
		if(b==2)
		{
			y=31+c;
		}
		if(b==3)
		{
			y=31+29+c;
		}
		if(b==4)
		{
			y=31+29+31+c;
		}
		if(b==5)
		{
			y=31+29+31+30+c;
		}
	    if(b==6)
		{
			y=31+29+31+30+31+c;
		}
		if(b==7)
		{
			y=31+29+31+30+31+30+c;
		}
	 
		if(b==8)
		{
			y=31+29+31+30+31+30+31+c;
		}	
		if(b==9)
		{
			y=31+29+31+30+31+30+31+31+c;
		}
		if(b==10)
		{
			y=31+29+31+30+31+30+31+31+30+c;
		}

        if(b==11)
		{
			y=31+29+31+30+31+30+31+31+30+31+c;
		}

        if(b==12)
		{
			y=31+29+31+30+31+30+31+31+30+31+30+c;
		}
		printf("%d",y);
	}	
	else 
	{
        if(b==1)
		{
			y=c;
		}
		if(b==2)
		{
			y=31+c;
		}
		if(b==3)
		{
			y=31+28+c;
		}
		if(b==4)
		{
			y=31+28+31+c;
		}
		if(b==5)
		{
			y=31+28+31+30+c;
		}
	    if(b==6)
		{
			y=31+28+31+30+31+c;
		}
	    if(b==7)
		{
			y=31+28+31+30+31+30+c;
		}
	 
		if(b==8)
		{
			y=31+28+31+30+31+30+31+c;
		}	
		if(b==9)
		{
			y=31+28+31+30+31+30+31+31+c;
		}
		if(b==10)
		{
			y=31+28+31+30+31+30+31+31+30+c;
		}

        if(b==11)
		{
			y=31+28+31+30+31+30+31+31+30+31+c;
		}

        if(b==12)
		{
			y=31+28+31+30+31+30+31+31+30+31+30+c;
		}
		printf("%d",y);
	}
return 0;
}