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

int main(){
	int a,b,c,d,e;                 //????  ????  ????  ??????????
	for (a=1;a<=5;a++)
		for (b=1;b<=5;b++) if (a!=b)
			for (c=1;c<=5;c++) if ((a!=c)&&(b!=c))
				for (d=1;d<=5;d++) if ((a!=d)&&(b!=d)&&(c!=d))
					for (e=1;e<=5;e++) if ((a!=e)&&(b!=e)&&(c!=e)&&(d!=e)&&(e!=2)&&(e!=3))
					{
						if ((a+b==3)&&(e==1)&&(b==2) &&(a!=5)&&(c==1)&&(d!=1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((a+c==3)&&(e==1)&&(b!=2) &&(a==5)&&(c==1)&&(d!=1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((a+d==3)&&(e==1)&&(b!=2) &&(a!=5)&&(c!=1)&&(d!=1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((a+e==3)&&(e==1)&&(b!=2) &&(a!=5)&&(c==1)&&(d==1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((b+c==3)&&(e!=1)&&(b==2) &&(a==5)&&(c==1)&&(d!=1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((b+d==3)&&(e!=1)&&(b==2) &&(a!=5)&&(c!=1)&&(d!=1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((b+e==3)&&(e!=1)&&(b==2) &&(a!=5)&&(c==1)&&(d==1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((c+d==3)&&(e!=1)&&(b!=2) &&(a==5)&&(c!=1)&&(d!=1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((c+e==3)&&(e!=1)&&(b!=2) &&(a==5)&&(c==1)&&(d==1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
						if ((d+e==3)&&(e!=1)&&(b!=2) &&(a!=5)&&(c!=1)&&(d==1))
							cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
					}
}
