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
	int p1,p2,p3,p4,p5,n,x;						//????????????????????
	cin>>n;
	if (n>=10000)								//????5??
	{
		p1=n/10000;								//????
		p2=(n-10000*p1)/1000;					//????
		p3=(n-10000*p1-1000*p2)/100;			//????
		p4=(n-10000*p1-1000*p2-100*p3)/10;		//????
		p5=n-10000*p1-1000*p2-100*p3-10*p4;		//????
		x=p5*10000+p4*1000+p3*100+p2*10+p1;		//?????
	}
	else if (n>=1000)							//???????
	{
		p1=n/1000;
		p2=(n-1000*p1)/100;
		p3=(n-1000*p1-100*p2)/10;
		p4=n-1000*p1-100*p2-10*p3;
		x=p4*1000+p3*100+p2*10+p1;
	}
	else if (n>=100)							//???????
	{
		p1=n/100;
		p2=(n-100*p1)/10;
		p3=n-100*p1-10*p2;
		x=p3*100+p2*10+p1;
	}
	else if (n>=10)								//???????
	{
		p1=n/10;
		p2=n-10*p1;
		x=p2*10+p1;
	}
	else										//???????
		x=n;
	cout<<x;
	return 0;
}