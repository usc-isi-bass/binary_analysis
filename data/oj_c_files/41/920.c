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
	int a,b,c,d,e,i,j,k,s,a1,b1,c1,d1,e1;
	for(a=1;a<6;a++)
		for(b=1;b<6;b++)
			for(c=1;c<6;c++)
				for(d=1;d<6;d++)
					for(e=1;e<6;e++)
						if((e!=2)&&(e!=3))
						{
	a1=(e==1);
	b1=(b==2);
	c1=(a==5);
	d1=(c!=1);
	e1=(d==1);
							if((((a==1)&&(b==2))||((a==2)&&(b==1)))&&(a1)&&(b1)&&(!c1)&&(!d1)&&(!e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}
                            if((((a==1)&&(c==2))||((a==2)&&(c==1)))&&(a1)&&(!b1)&&(c1)&&(!d1)&&(!e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}
                             if((((a==1)&&(d==2))||((a==2)&&(d==1)))&&(a1)&&(!b1)&&(!c1)&&(d1)&&(!e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((a==1)&&(e==2))||((a==2)&&(e==1)))&&(a1)&&(!b1)&&(!c1)&&(!d1)&&(e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((c==1)&&(b==2))||((c==2)&&(b==1)))&&(!a1)&&(b1)&&(c1)&&(!d1)&&(!e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((d==1)&&(b==2))||((d==2)&&(b==1)))&&(!a1)&&(b1)&&(!c1)&&(d1)&&(!e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((e==1)&&(b==2))||((e==2)&&(b==1)))&&(!a1)&&(b1)&&(!c1)&&(!d1)&&(e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((c==1)&&(d==2))||((c==2)&&(d==1)))&&(!a1)&&(!b1)&&(c1)&&(d1)&&(!e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((c==1)&&(e==2))||((c==2)&&(e==1)))&&(!a1)&&(!b1)&&(c1)&&(!d1)&&(e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}

							 if((((d==1)&&(e==2))||((d==2)&&(e==1)))&&(!a1)&&(!b1)&&(!c1)&&(d1)&&(e1)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=e)&&(c!=e)&&(d!=e)&&(b!=d)&&(c!=d))
							{	cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
							  return 0;
							}
						}
}