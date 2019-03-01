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

//???????
//??????????
//???1000012750?
int main()                                  //?????
{                                           //?????
    int s,a,b,c,d,e;                        //????
	cin>>s;                                 //????
	a=s/10000;                              //??????
	b=(s-a*10000)/1000;                     //??????
	c=(s-a*10000-b*1000)/100;               //??????    
	d=(s-a*10000-b*1000-c*100)/10;          //??????  
	e=s%10;                                 //??????
	if(a!=0)                                //????????????????
	    s=e*10000+d*1000+c*100+b*10+a;
    else if(b!=0)
		s=e*1000+d*100+c*10+b;
	else if(c!=0)
		s=e*100+d*10+c;
	else if(d!=0)
		s=e*10+d;
	else 
		s=e;                                
	cout<<s;                                //????
	return 0;                               //???????????????????
}                                           //?????