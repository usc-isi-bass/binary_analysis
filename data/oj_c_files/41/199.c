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
 * 6.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */

int main()
{
	int a,b,c,d,e;


	    for(a=1;a<=2;a++)
	    for(b=1;b<=2;b++)
	    for(c=1;c<=5;c++)
	    for(d=1;d<=5;d++)
	    for(e=4;e<=5;e++)
	    {
	    	if((e==1)&&(b==2)&&(a!=5)&&(c==1)&&(d!=1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	    }


	    for(a=1;a<=2;a++)
	        for(b=1;b<=5;b++)
	        for(c=1;c<=2;c++)
	        for(d=1;d<=5;d++)
	        for(e=4;e<=5;e++)
	        {
	        	if((e==1)&&(a==5)&&(b!=2)&&(c==1)&&(d!=1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	        	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	        }


	        for(a=1;a<=2;a++)
	       	    for(b=1;b<=5;b++)
	       	    for(c=1;c<=5;c++)
	       	    for(d=1;d<=2;d++)
	       	    for(e=4;e<=5;e++)
	       	    {
	       	    	if((e==1)&&(c!=1)&&(b!=2)&&(a!=5)&&(d!=1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	       	    }


	        for(a=1;a<=2;a++)
	       	    for(b=1;b<=5;b++)
	       	    for(c=1;c<=5;c++)
	       	    for(d=1;d<=5;d++)
	       	    for(e=1;e<=1;e++)
	       	    {
	       	    	if((e==1)&&(d==1)&&(b!=2)&&(a!=5)&&(c==1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	       	    }


	        for(a=1;a<=5;a++)
	       	    for(b=1;b<=2;b++)
	       	    for(c=1;c<=2;c++)
	       	    for(d=1;d<=5;d++)
	       	    for(e=4;e<=5;e++)
	       	    {
	       	    	if((a==5)&&(b==2)&&(e!=1)&&(c==1)&&(d!=1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	       	    }


	        for(a=1;a<=5;a++)
	       	    for(b=1;b<=2;b++)
	       	    for(c=1;c<=5;c++)
	       	    for(d=1;d<=2;d++)
	       	    for(e=4;e<=5;e++)
	       	    {
	       	    	if((c!=1)&&(b==2)&&(e!=1)&&(a!=5)&&(d!=1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	       	    }

	        for(a=1;a<=5;a++)
	       	    for(b=1;b<=2;b++)
	       	    for(c=1;c<=5;c++)
	       	    for(d=1;d<=5;d++)
	       	    for(e=1;e<=1;e++)
	       	    {
	       	    	if((d==1)&&(b==2)&&(e!=1)&&(a!=5)&&(c==1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	       	    }

	        for(a=1;a<=5;a++)
	       	    for(b=1;b<=5;b++)
	       	    for(c=1;c<=2;c++)
	       	    for(d=1;d<=2;d++)
	       	    for(e=4;e<=5;e++)
	       	    {
	       	    	if((a==5)&&(c!=1)&&(e!=1)&&(a!=5)&&(d!=1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	       	    }

	        for(a=1;a<=5;a++)
	        	       	    for(b=1;b<=5;b++)
	        	       	    for(c=1;c<=2;c++)
	        	       	    for(d=1;d<=5;d++)
	        	       	    for(e=1;e<=1;e++)
	        	       	    {
	        	       	    	if((a==5)&&(d==1)&&(e!=1)&&(b!=2)&&(c==1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	        	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	        	       	    }

	        for(a=1;a<=5;a++)
	        	       	    for(b=1;b<=5;b++)
	        	       	    for(c=1;c<=5;c++)
	        	       	    for(d=1;d<=2;d++)
	        	       	    for(e=1;e<=1;e++)
	        	       	    {
	        	       	    	if((d==1)&&(c!=1)&&(e!=1)&&(b!=2)&&(a!=5)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
	        	       	    	   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
	        	       	    }
	return 0;
}
