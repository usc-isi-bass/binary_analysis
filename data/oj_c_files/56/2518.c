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

int main()                                //???
{
	int A,a,b,c,d,e;                      //????????
	cin>>A;                               //????
	a=A/10000;                            //????
	b=A/1000-a*10;
	c=A/100-a*100-b*10;
	d=A/10-a*1000-b*100-c*10;
	e=A%10;
	if(a==0)                              //??????????????
		if(b==0)
			if(c==0)
				if(d==0)
					cout<<e<<endl;
				else cout<<e<<d<<endl;
			else cout<<e<<d<<c<<endl;
		else cout<<e<<d<<c<<b<<endl;
	else cout<<e<<d<<c<<b<<a<<endl;
	return 0;
}                                         //????