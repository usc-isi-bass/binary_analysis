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

void main()
{
	int b[6],t[6],i;
	int h(int a);
	for(i=0;i<6;i++)
	{
	    scanf("%d",&b[i]);
        t[i]=h(b[i]);
	}
    for(i=0;i<6;i++)
	   printf("%d\n",t[i]);
}
int h(int a)
{
	int c,x,y,z,i,j;
		x=a/10000;
		y=(a-x*10000)/1000;
		z=(a-x*10000-y*1000)/100;
		i=(a-x*10000-y*1000-z*100)/10;
		j=a-x*10000-y*1000-z*100-i*10;
	if(a>=10000||a<=-10000)
	{
	   c=x+y*10+z*100+i*1000+j*10000;
	}
	if((a>=1000&&a<10000)||(a<=-1000&&a>-10000))
	{
       c=y+z*10+i*100+j*1000;
	   
	}
	if((a>=100&&a<1000)||(a<=-100&&a>-1000))
	{
		c=z+i*10+j*100;
	}
	if((a>=10&&a<100)||(a<=-10&&a>-100))
	{
		c=i+j*10;
	}
	if(a<10&&a>-10)
	{
		c=a;
	}
	return(c);
}
	   