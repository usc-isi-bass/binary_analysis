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
	int n=1,a,b,c,d;
	cin>>a>>b>>c;
	d=a;
	a=a-1;
	a=a%400;
	n=(n+((a/100)*5))%7;
	a=a%100;
	n=(n+((a/4)*366%7)+(a-a/4)*365%7)%7;
	if(d%4==0&&d%100!=0||d%400==0)
	{
		if(b==1)
	 	n=n+c;
	    if(b==2)
		n=n+31+c;
	    if(b==3)
		n=n+31+29+c;
	    if(b==4)
		n=n+31+29+31+c;
	    if(b==5)
		n=n+31+29+31+30+c;
    	if(b==6)
		n=n+31+29+31+30+31+c;
	    if(b==7)
		n=n+31+29+31+30+31+c+30;
    	if(b==8)
		n=n+31+29+31+30+31+c+30+31;
        if(b==9)
		n=n+31+29+31+30+31+c+30+62;
        if(b==10)
		n=n+31+29+31+30+31+c+30+62+30;
	    if(b==11)
		n=n+31+29+31+30+31+c+60+62+31;
	    if(b==12)
		n=n+31+29+31+30+31+c+60+93+30;
	}
	else{
		if(b==1)
	 	n=n+c;
	    if(b==2)
		n=n+31+c;
	    if(b==3)
		n=n+31+29+c;
	    if(b==4)
		n=n+31+29+31+c;
	    if(b==5)
		n=n+31+29+31+30-1+c;
    	if(b==6)
		n=n+31+29+31+30+31+c;
	    if(b==7)
		n=n+31+29+31+30+31+c+30;
    	if(b==8)
		n=n+31+29+31+30+31+c+30+31;
        if(b==9)
		n=n+31+29+31+30+31+c+30+62;
        if(b==10)
		n=n+31+29+31+30+31+c+30+62+30;
	    if(b==11)
		n=n+31+29+31+30+31+c+60+62+31;
	    if(b==12)
		n=n+31+29+31+30+31+c+60+93+30;
		if(b!=1&&b!=2)
			n--;
	}
	n--;
	n=n%7;
	if(n==1)
		cout<<"Mon";
	else if(n==2)
		cout<<"Tue";
	else if(n==3)
		cout<<"Wed";
	else if(n==4)
		cout<<"Tur";
	else if(n==5)
		cout<<"Fri"
	;else if(n==6)
		cout<<"Sat";
	else
		cout<<"Sun"
		;
	cout<<".";
	return 0;
}
