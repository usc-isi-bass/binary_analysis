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
	int a,b,c,n,s[12],i,t;
	scanf ("%d %d %d",&a,&b,&c);
	s[0]=31;
	s[2]=31;
	s[3]=30;
	s[4]=31;
	s[5]=30;
	s[6]=31;
	s[7]=31;
	s[8]=30;
	s[9]=31;
	s[10]=30;
	s[11]=31;
	t=0;
	for(i=0;i<b-1;i++)
	{
	    if ((a%4==0&&a%100!=0)||a%400==0)
		{
			s[1]=29;
			t=s[i]+t;
		}		
		else 
		{
			s[1]=28;
			t=s[i]+t;
		 }	
	} 
		    n=t+c;
			printf("%d\n",n);	
		

	return 0;
}

