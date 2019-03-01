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
	int a,b,c,d,e;
	c=1;
	a=5;
	e=4;
	for(b=2;b<4;b++)
	{
		d=5-b;
		if(b==2&&(b==2)==1&&(c!=1)==0)
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
		else if(d==2&&(b==2)!=1&&(c!=1)==1)
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
	}
    return 0;
}