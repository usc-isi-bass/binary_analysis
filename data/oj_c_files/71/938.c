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

int main(int argc, char* argv[])
{
	int n,a,i;
	int b,c,d,e,f;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if((a%4==0&&a%100!=0)||(a%400==0))
		{
		    if(b==1)
			   d=1;
		    else if(b==2)
               d=31+1;
            else if(b==3)
               d=31+29+1;
            else if(b==4)
                d=31+29+31+1;
            else if(b==5)
               d=31+29+31+30+1;
            else if(b==6)
               d=31+29+31+30+31+1;
            else if(b==7)
                d=31+29+31+30+31+30+1;
           else if(b==8)
               d=31+29+31+30+31+30+31+1;
            else if(b==9)
                d=31+29+31+30+31+30+31+31+1;
           else if(b==10)
               d=31+29+31+30+31+30+31+31+30+1;
           else if(b==11)
               d=31+29+31+30+31+30+31+31+30+31+1;
           else if(b==12)
               d=31+29+31+30+31+30+31+31+30+31+30+1;
	
		    if(c==1)
			e=1;
		else if(c==2)
            e=31+1;
        else if(c==3)
            e=31+29+1;
        else if(c==4)
            e=31+29+31+1;
        else if(c==5)
            e=31+29+31+30+1;
        else if(c==6)
            e=31+29+31+30+31+1;
        else if(c==7)
            e=31+29+31+30+31+30+1;
        else if(c==8)
            e=31+29+31+30+31+30+31+1;
        else if(c==9)
            e=31+29+31+30+31+30+31+31+1;
        else if(c==10)
            e=31+29+31+30+31+30+31+31+30+1;
        else if(c==11)
            e=31+29+31+30+31+30+31+31+30+31+1;
        else if(c==12)
            e=31+29+31+30+31+30+31+31+30+31+30+1;
		}
		else
		{
        if(b==1)
			d=1;
		else if(b==2)
            d=31+1;
        else if(b==3)
            d=31+28+1;
        else if(b==4)
            d=31+28+31+1;
        else if(b==5)
            d=31+28+31+30+1;
        else if(b==6)
            d=31+28+31+30+31+1;
        else if(b==7)
            d=31+28+31+30+31+30+1;
        else if(b==8)
            d=31+28+31+30+31+30+31+1;
        else if(b==9)
            d=31+28+31+30+31+30+31+31+1;
        else if(b==10)
            d=31+28+31+30+31+30+31+31+30+1;
        else if(b==11)
            d=31+28+31+30+31+30+31+31+30+31+1;
        else if(b==12)
            d=31+28+31+30+31+30+31+31+30+31+30+1;
		if(c==1)
			e=1;
		else if(c==2)
            e=31+1;
        else if(c==3)
            e=31+28+1;
        else if(c==4)
            e=31+28+31+1;
        else if(c==5)
            e=31+28+31+30+1;
        else if(c==6)
            e=31+28+31+30+31+1;
        else if(c==7)
            e=31+28+31+30+31+30+1;
        else if(c==8)
            e=31+28+31+30+31+30+31+1;
        else if(c==9)
            e=31+28+31+30+31+30+31+31+1;
        else if(c==10)
            e=31+28+31+30+31+30+31+31+30+1;
        else if(c==11)
            e=31+28+31+30+31+30+31+31+30+31+1;
        else if(c==12)
            e=31+28+31+30+31+30+31+31+30+31+30+1;
		}
		f=e-d;
		if(f%7==0)
		{
	       printf("YES\n");
		   
		}
		else
			printf("NO\n");



	}

	
	return 0;
}

