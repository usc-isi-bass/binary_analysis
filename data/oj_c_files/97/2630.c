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
 * 01.cpp
 *
 *  Created on: 2011-11-6
 *      Author: ???
 */

int main()                          //?????
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0;        //????
	cin>>n;                           //????
	a=n/100;                          //??100????
	if(n%100!=0)
	{b=((n%100)/50);                  //50????
	if((n-100*a)%50!=0)
	{
		c=(((n-100*a-50*b)%50)/20);                 //20????
				if((n-100*a-50*b)%20!=0)
				{
					d=(((n-100*a-50*b)%20)/10);         //10???
					if((n-100*a-50*b-20*c)%10!=0)
						e=((n-a*100-50*b-20*c-10*d)%10)/5;            //5???
					{
					if((n-100*a-50*b-20*c-10*d)%5!=0)
						f=(((n-100*a-50*b-20*c-10*d-5*e)%5)/1);
				}
	}
	}}
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
}
