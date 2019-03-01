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
	int a,b,c,feb,i,m,n=0,q;
	scanf("%d%d%d",&a,&b,&c);
	if( (a%4==0&&a%100!=0)||a%400==0)
	{
		feb=29;
	}
    else
	{
        feb=28;
	}
	

    for (i=1;i<b;i++)
	{
		if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	    	m=31;
        else if(i==2)
	    	m=feb;
     	else
	        m=30;
		n=n+m;
	}
    q=n+c;
	printf("%d",q);
    return 0;
}

