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


int  main()
{
	int a,b,c;
	a=0;
	while(a<3)
	{
		b=0;
		while(b<3)
		{
			c=0;
			while(c<3)
			{
				if(((((b>a)+(c==a))==(2-a))+
				(((a>b)+(a>c))==(2-b))+
			    (((c>b)+(b>a))==(2-c)))==3)
				 break;
				c++;
			}
			if(((((b>a)+(c==a))==(2-a))+
							(((a>b)+(a>c))==(2-b))+
						    (((c>b)+(b>a))==(2-c)))==3)
							 break;
			b++;
		}
		if(((((b>a)+(c==a))==(2-a))+
						(((a>b)+(a>c))==(2-b))+
					    (((c>b)+(b>a))==(2-c)))==3)
						 break;
		a++;
	}
	if(((a>=b)+(a>=c))!=2)
	{
		if(((a>=b)+(a>=c))==0)
		{
			if(b>=c)cout<<"A"<<"C"<<"B"<<endl;
			else cout<<"A"<<"B"<<"C"<<endl;
		}
		else
		{
			if(b>=c)cout<<"C"<<"A"<<"B"<<endl;
			else cout<<"B"<<"A"<<"C"<<endl;
		}
	}
	else
	{
		if(b>=c)cout<<"C"<<"B"<<"A"<<endl;
		else cout<<"B"<<"C"<<"A"<<endl;
	}
	return 0;
}