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
 * k5.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */
int main()
{
	int a,b,c,d,e;//????
	for(a=1;a<6;a++)//for????
		for(b=1;b<6;b++)
			for(c=1;c<6;c++)
				for(d=1;d<6;d++)
					for(e=1;e<6;e++)
						if((((a*b==2)&&(e==1)&&(b==2)&&(a!=5)&&(c==1)&&(d!=1))+((a*c==2)&&(e==1)&&(a==5)&&(b!=2)&&(c==1)&&(d!=1))+((a*d==2)&&(e==1)&&(c!=1)&&(b!=2)&&(a!=5)&&(d!=1))
						   +((a*e==2)&&(e==1)&&(d==1)&&(b!=2)&&(c==1)&&(a!=5))+((b*c==2)&&(b==2)&&(a==5)&&(e!=1)&&(d!=1)&&(c==1))+((b*d==2)&&(b==2)&&(c!=1)&&(e!=1)&&(a!=5)&&(d!=1))
							+((b*e==2)&&(b==2)&&(d==1)&&(e!=1)&&(a!=5)&&(c==1))+((c*d==2)&&(a==5)&&(c!=1)&&(e!=1)&&(b!=2)&&(d!=1))+((c*e==2)&&(a==5)&&(d==1))
							+((d*e==2)&&(c!=1)&&(d==1))==1)&&(a*b*c*d*e==120)&&(a+b+c+d+e==15)&&(e!=2)&&(e!=3))//if????????
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
						return 0;//???????????????0?
}

