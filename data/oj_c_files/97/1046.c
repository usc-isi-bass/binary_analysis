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

//**********************************************************
//*   ?  ?   ?: ?????.cpp                          *
//*   ?       ?: ? ?                                   *
//*   ? ? ? ?: 2010?10?22?                          *
//*   ? ? ? ?: ??????????????????345 *
//*                ????????????????????*
//*                ?????100??50??20??10??5??*
//*                1??????????????????? *
//**********************************************************
int main()                                                          //???
{                                                                   //?????
	int n=0,a=0,b=0,c=0,d=0,e=0,f=0;                                //??n?????,a,b,c,d,e,
	                                                                //f???100??50??20??10??5??1????
	cin>>n;                                                         //??n??
	a=n/100;
	b=(n-a*100)/50;
	c=(n-a*100-b*50)/20;
	d=(n-a*100-b*50-c*20)/10;
	e=(n-a*100-b*50-c*20-d*10)/5;
	f=n-a*100-b*50-c*20-d*10-e*5;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;                                                  //????100??50??20??10??5??1????
	                                                                //?????
	return 0;
}