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

/*
 * ???:02.cpp
 * ???:???
 * ????:2011-11-06
 * ??:?????????????????????????????????????????100??50??20??10??5??1?????
 */

int main( )
{
    int a,b;     //????
    cin>>a;     //????
    if(a>=100)     //????????????
    {
    	b=(int)(a/100);
    	cout<<b<<endl;
    	a=a-b*100;
    }
    else cout<<0<<endl;
    if(a>=50)
    {
    	cout<<1<<endl;
    	a=a-50;
    }
    else cout<<0<<endl;
    if(a>=40)
    {
    	cout<<2<<endl;
    	a=a-40;
    }
    else if(a>=20&&a<40)
    {
    	cout<<1<<endl;
    	a=a-20;
    }
    else cout<<0<<endl;
    if(a>=10)
    {
    	cout<<1<<endl;
    	a=a-10;
    }
    else cout<<0<<endl;
    if(a>=5)
    {
    	cout<<1<<endl;
    	a=a-5;
    }
    else cout<<0<<endl;
    cout<<a<<endl;
	return 0;     //????
}