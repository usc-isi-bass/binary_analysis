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
 * ??????????
 * ?????2011-11-6
 * ?????
 * ???????????
 */
int main()
{
	int money,a=0,b=0,c=0,d=0,e=0,f=0;   //????            
	cin>>money;                          //?????
	while(money>=100)                    //????????????
		{money=money-100;
		a++;
		}
	while(money>=50)
		{money=money-50;
		b++;
		}
	while(money>=20)
		{money=money-20;
		c++;
		}
	while(money>=10)
		{money=money-10;
		d++;
		}
	while(money>=5)
		{money=money-5;
		e++;
		}
	while(money>=1)
			{money=money-1;
			f++;
			}
	cout<<a<<endl;                        //????
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;
	return 0;
}
